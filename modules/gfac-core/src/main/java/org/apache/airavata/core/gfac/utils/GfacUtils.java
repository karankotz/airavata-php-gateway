/*
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 */

package org.apache.airavata.core.gfac.utils;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.io.Reader;
import java.io.StringWriter;
import java.net.InetAddress;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.UnknownHostException;
import java.util.Date;
import java.util.Properties;
import java.util.Random;
import java.util.UUID;
import java.util.Vector;
import java.util.concurrent.atomic.AtomicInteger;

import javax.xml.namespace.QName;

import org.apache.airavata.core.gfac.exception.GfacException;
import org.apache.airavata.core.gfac.exception.GfacException.FaultCode;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class GfacUtils {
    protected final static Logger log = LoggerFactory.getLogger(GfacUtils.class);
    private static AtomicInteger tempFileCount = new AtomicInteger();
    private static Random random = new Random();

    public static void writeToFile(InputStream is, File file) throws IOException {
        FileWriter fw = new FileWriter(file);

        // get the standard out of the application and write to file

        Reader reader = new InputStreamReader(is);
        char[] cbuf = new char[1024];
        while ((reader.read(cbuf, 0, 1024)) != -1) {
            fw.write(cbuf);
        }
        fw.close();
        reader.close();
        is.close();
    }

    public static void writeToFile(String data, File file) throws IOException {
        FileWriter fw = null;
        try {
            fw = new FileWriter(file);
            // get the standard out of the application and write to file
            fw.write(data);
        } catch (IOException io) {
            throw io;
        } finally {
            if (fw != null) {
                try {
                    fw.close();
                } catch (IOException e) {
                    throw e;
                }
            }
        }
    }

    public static String readFromStream(InputStream in) throws IOException {
        StringBuffer wsdlStr = new StringBuffer();

        int read;

        byte[] buf = new byte[1024];
        while ((read = in.read(buf)) > 0) {
            wsdlStr.append(new String(buf, 0, read));
        }
        in.close();
        return wsdlStr.toString();
    }

    public static String readFile(String file) throws GfacException {
        FileInputStream in = null;
        try {
            in = new FileInputStream(file);
            byte[] content = new byte[in.available()];
            in.read(content);
            return new String(content);
        } catch (FileNotFoundException e) {
            throw new GfacException(e, FaultCode.InvaliedLocalArgumnet);
        } catch (IOException e) {
            throw new GfacException(e, FaultCode.LocalError);
        } finally {
            if (in != null) {
                try {
                    in.close();
                } catch (IOException e) {
                    throw new GfacException(e, FaultCode.LocalError);
                }
            }
        }
    }

    public static boolean isLocalHost(String appHost) throws GfacException {
        try {
            String localHost = InetAddress.getLocalHost().getCanonicalHostName();

            if (localHost.equals(appHost) || GFacConstants.LOCALHOST.equals(appHost)
                    || GFacConstants._127_0_0_1.equals(appHost)) {
                return true;
            } else {
                return false;
            }
        } catch (UnknownHostException e) {
            throw new GfacException(e, FaultCode.LocalError);
        }
    }

    public static String createServiceDirName(QName serviceName) {
        String date = new Date().toString();
        date = date.replaceAll(" ", "_");
        date = date.replaceAll(":", "_");
        return serviceName.getLocalPart() + "_" + date + "_" + UUID.randomUUID();
    }

    public static String createErrorMessage(Exception e) {
        StringWriter errStrW = new StringWriter();
        e.printStackTrace(new PrintWriter(errStrW));
        return errStrW.getBuffer().toString();
    }

    public static URI createGsiftpURI(ContactInfo host, String localPath) throws GfacException {
        try {
            StringBuffer buf = new StringBuffer();

            if (!host.hostName.startsWith("gsiftp://"))
                buf.append("gsiftp://");
            buf.append(host).append(":").append(host.port);
            if (!host.hostName.endsWith("/"))
                buf.append("/");
            buf.append(localPath);
            return new URI(buf.toString());
        } catch (URISyntaxException e) {
            throw new GfacException(e, FaultCode.InvaliedLocalArgumnet);
        }
    }

    public static URI createGsiftpURI(String host, String localPath) throws GfacException {
        try {
            StringBuffer buf = new StringBuffer();
            if (!host.startsWith("gsiftp://"))
                buf.append("gsiftp://");
            buf.append(host);
            if (!host.endsWith("/"))
                buf.append("/");
            buf.append(localPath);
            return new URI(buf.toString());
        } catch (URISyntaxException e) {
            throw new GfacException(e, FaultCode.InvaliedLocalArgumnet);
        }
    }

    public static Vector<URI> listLocalDir(String dirName, String localhost) throws GfacException {
        try {
            Vector<URI> files = new Vector<URI>();
            File dir = new File(dirName);

            if (dir.exists()) {
                File[] fileList = dir.listFiles();
                for (File file : fileList) {
                    if (!file.getName().equals(".") && !file.getName().equals("..")) {
                        URI uri = new URI("gsiftp://" + localhost + "/" + file.getAbsolutePath());
                        files.add(uri);
                    }
                }
            } else {
                throw new GfacException("can not find the output data directory to list files",
                        FaultCode.InvaliedLocalArgumnet);
            }
            return files;
        } catch (URISyntaxException e) {
            throw new GfacException(e, FaultCode.InvaliedLocalArgumnet);
        }
    }
    
    public static URI createWorkflowQName(QName name) throws GfacException {
        try {
            return new URI("urn:qname:" + name.getNamespaceURI() + ":" + name.getLocalPart());
        } catch (URISyntaxException e) {
            throw new GfacException(e, FaultCode.InvaliedLocalArgumnet);
        }
    }

    public static String findStrProperty(Properties config, String name, String defaultVal) {
        String value = config.getProperty(name);
        if (value == null) {
            return defaultVal;
        }
        return value.trim();
    }

    public static boolean findBooleanProperty(Properties config, String name, boolean defaultVal) {
        String value = config.getProperty(name);
        if (value == null) {
            return defaultVal;
        }
        return Boolean.valueOf(value.trim());
    }

    public static String formatJobStatus(String jobid, String jobstatus) {
        return "Status of job " + jobid + "is " + jobstatus;
    }

    public static String createRandomName(String name) {
        return name + System.currentTimeMillis() + "_" + tempFileCount.incrementAndGet();
    }

    public static Random getRandom() {
        return random;
    }

    public static boolean isArray(String typeName) {
        if (typeName.endsWith("Array")) {
            // TODO make it more tigter
            return true;
        } else {
            return false;
        }
    }
}
