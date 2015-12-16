#
# Autogenerated by Thrift Compiler (0.9.2)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TException, TApplicationException
import apache.airavata.model.data.movement.ttypes


from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol, TProtocol
try:
  from thrift.protocol import fastbinary
except:
  fastbinary = None


class ReplicaLocationCategory:
  GATEWAY_DATA_STORE = 0
  COMPUTE_RESOURCE = 1
  LONG_TERM_STORAGE_RESOURCE = 2
  OTHER = 3

  _VALUES_TO_NAMES = {
    0: "GATEWAY_DATA_STORE",
    1: "COMPUTE_RESOURCE",
    2: "LONG_TERM_STORAGE_RESOURCE",
    3: "OTHER",
  }

  _NAMES_TO_VALUES = {
    "GATEWAY_DATA_STORE": 0,
    "COMPUTE_RESOURCE": 1,
    "LONG_TERM_STORAGE_RESOURCE": 2,
    "OTHER": 3,
  }

class ReplicaPersistentType:
  TRANSIENT = 0
  PERSISTENT = 1

  _VALUES_TO_NAMES = {
    0: "TRANSIENT",
    1: "PERSISTENT",
  }

  _NAMES_TO_VALUES = {
    "TRANSIENT": 0,
    "PERSISTENT": 1,
  }

class DataResourceType:
  COLLECTION = 0
  FILE = 1

  _VALUES_TO_NAMES = {
    0: "COLLECTION",
    1: "FILE",
  }

  _NAMES_TO_VALUES = {
    "COLLECTION": 0,
    "FILE": 1,
  }


class DataResourceModel:
  """
  Attributes:
   - resourceId
   - gatewayId
   - parentResourceId
   - resourceName
   - resourceDescription
   - ownerName
   - dataResourceType
   - resourceSize
   - creationTime
   - lastModifiedTime
   - resourceMetadata
   - replicaLocations
   - childResources
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRING, 'resourceId', None, None, ), # 1
    (2, TType.STRING, 'gatewayId', None, None, ), # 2
    (3, TType.STRING, 'parentResourceId', None, None, ), # 3
    (4, TType.STRING, 'resourceName', None, None, ), # 4
    (5, TType.STRING, 'resourceDescription', None, None, ), # 5
    (6, TType.STRING, 'ownerName', None, None, ), # 6
    (7, TType.I32, 'dataResourceType', None, None, ), # 7
    (8, TType.I32, 'resourceSize', None, None, ), # 8
    (9, TType.I64, 'creationTime', None, None, ), # 9
    (10, TType.I64, 'lastModifiedTime', None, None, ), # 10
    (11, TType.MAP, 'resourceMetadata', (TType.STRING,None,TType.STRING,None), None, ), # 11
    (12, TType.LIST, 'replicaLocations', (TType.STRUCT,(DataReplicaLocationModel, DataReplicaLocationModel.thrift_spec)), None, ), # 12
    (13, TType.LIST, 'childResources', (TType.STRUCT,(DataResourceModel, DataResourceModel.thrift_spec)), None, ), # 13
  )

  def __init__(self, resourceId=None, gatewayId=None, parentResourceId=None, resourceName=None, resourceDescription=None, ownerName=None, dataResourceType=None, resourceSize=None, creationTime=None, lastModifiedTime=None, resourceMetadata=None, replicaLocations=None, childResources=None,):
    self.resourceId = resourceId
    self.gatewayId = gatewayId
    self.parentResourceId = parentResourceId
    self.resourceName = resourceName
    self.resourceDescription = resourceDescription
    self.ownerName = ownerName
    self.dataResourceType = dataResourceType
    self.resourceSize = resourceSize
    self.creationTime = creationTime
    self.lastModifiedTime = lastModifiedTime
    self.resourceMetadata = resourceMetadata
    self.replicaLocations = replicaLocations
    self.childResources = childResources

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.STRING:
          self.resourceId = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.STRING:
          self.gatewayId = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.STRING:
          self.parentResourceId = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.STRING:
          self.resourceName = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 5:
        if ftype == TType.STRING:
          self.resourceDescription = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 6:
        if ftype == TType.STRING:
          self.ownerName = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 7:
        if ftype == TType.I32:
          self.dataResourceType = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 8:
        if ftype == TType.I32:
          self.resourceSize = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 9:
        if ftype == TType.I64:
          self.creationTime = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 10:
        if ftype == TType.I64:
          self.lastModifiedTime = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 11:
        if ftype == TType.MAP:
          self.resourceMetadata = {}
          (_ktype1, _vtype2, _size0 ) = iprot.readMapBegin()
          for _i4 in xrange(_size0):
            _key5 = iprot.readString();
            _val6 = iprot.readString();
            self.resourceMetadata[_key5] = _val6
          iprot.readMapEnd()
        else:
          iprot.skip(ftype)
      elif fid == 12:
        if ftype == TType.LIST:
          self.replicaLocations = []
          (_etype10, _size7) = iprot.readListBegin()
          for _i11 in xrange(_size7):
            _elem12 = DataReplicaLocationModel()
            _elem12.read(iprot)
            self.replicaLocations.append(_elem12)
          iprot.readListEnd()
        else:
          iprot.skip(ftype)
      elif fid == 13:
        if ftype == TType.LIST:
          self.childResources = []
          (_etype16, _size13) = iprot.readListBegin()
          for _i17 in xrange(_size13):
            _elem18 = DataResourceModel()
            _elem18.read(iprot)
            self.childResources.append(_elem18)
          iprot.readListEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('DataResourceModel')
    if self.resourceId is not None:
      oprot.writeFieldBegin('resourceId', TType.STRING, 1)
      oprot.writeString(self.resourceId)
      oprot.writeFieldEnd()
    if self.gatewayId is not None:
      oprot.writeFieldBegin('gatewayId', TType.STRING, 2)
      oprot.writeString(self.gatewayId)
      oprot.writeFieldEnd()
    if self.parentResourceId is not None:
      oprot.writeFieldBegin('parentResourceId', TType.STRING, 3)
      oprot.writeString(self.parentResourceId)
      oprot.writeFieldEnd()
    if self.resourceName is not None:
      oprot.writeFieldBegin('resourceName', TType.STRING, 4)
      oprot.writeString(self.resourceName)
      oprot.writeFieldEnd()
    if self.resourceDescription is not None:
      oprot.writeFieldBegin('resourceDescription', TType.STRING, 5)
      oprot.writeString(self.resourceDescription)
      oprot.writeFieldEnd()
    if self.ownerName is not None:
      oprot.writeFieldBegin('ownerName', TType.STRING, 6)
      oprot.writeString(self.ownerName)
      oprot.writeFieldEnd()
    if self.dataResourceType is not None:
      oprot.writeFieldBegin('dataResourceType', TType.I32, 7)
      oprot.writeI32(self.dataResourceType)
      oprot.writeFieldEnd()
    if self.resourceSize is not None:
      oprot.writeFieldBegin('resourceSize', TType.I32, 8)
      oprot.writeI32(self.resourceSize)
      oprot.writeFieldEnd()
    if self.creationTime is not None:
      oprot.writeFieldBegin('creationTime', TType.I64, 9)
      oprot.writeI64(self.creationTime)
      oprot.writeFieldEnd()
    if self.lastModifiedTime is not None:
      oprot.writeFieldBegin('lastModifiedTime', TType.I64, 10)
      oprot.writeI64(self.lastModifiedTime)
      oprot.writeFieldEnd()
    if self.resourceMetadata is not None:
      oprot.writeFieldBegin('resourceMetadata', TType.MAP, 11)
      oprot.writeMapBegin(TType.STRING, TType.STRING, len(self.resourceMetadata))
      for kiter19,viter20 in self.resourceMetadata.items():
        oprot.writeString(kiter19)
        oprot.writeString(viter20)
      oprot.writeMapEnd()
      oprot.writeFieldEnd()
    if self.replicaLocations is not None:
      oprot.writeFieldBegin('replicaLocations', TType.LIST, 12)
      oprot.writeListBegin(TType.STRUCT, len(self.replicaLocations))
      for iter21 in self.replicaLocations:
        iter21.write(oprot)
      oprot.writeListEnd()
      oprot.writeFieldEnd()
    if self.childResources is not None:
      oprot.writeFieldBegin('childResources', TType.LIST, 13)
      oprot.writeListBegin(TType.STRUCT, len(self.childResources))
      for iter22 in self.childResources:
        iter22.write(oprot)
      oprot.writeListEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __hash__(self):
    value = 17
    value = (value * 31) ^ hash(self.resourceId)
    value = (value * 31) ^ hash(self.gatewayId)
    value = (value * 31) ^ hash(self.parentResourceId)
    value = (value * 31) ^ hash(self.resourceName)
    value = (value * 31) ^ hash(self.resourceDescription)
    value = (value * 31) ^ hash(self.ownerName)
    value = (value * 31) ^ hash(self.dataResourceType)
    value = (value * 31) ^ hash(self.resourceSize)
    value = (value * 31) ^ hash(self.creationTime)
    value = (value * 31) ^ hash(self.lastModifiedTime)
    value = (value * 31) ^ hash(self.resourceMetadata)
    value = (value * 31) ^ hash(self.replicaLocations)
    value = (value * 31) ^ hash(self.childResources)
    return value

  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class DataReplicaLocationModel:
  """
  Attributes:
   - replicaId
   - resourceId
   - replicaName
   - replicaDescription
   - creationTime
   - lastModifiedTime
   - replicaLocationCategory
   - replicaPersistentType
   - storageResourceId
   - storageResourceHostName
   - dataMovementProtocol
   - hostPort
   - filePath
   - replicaUrl
   - replicaMetadata
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRING, 'replicaId', None, None, ), # 1
    (2, TType.STRING, 'resourceId', None, None, ), # 2
    (3, TType.STRING, 'replicaName', None, None, ), # 3
    (4, TType.STRING, 'replicaDescription', None, None, ), # 4
    (5, TType.I64, 'creationTime', None, None, ), # 5
    (6, TType.I64, 'lastModifiedTime', None, None, ), # 6
    (7, TType.I32, 'replicaLocationCategory', None, None, ), # 7
    (8, TType.I32, 'replicaPersistentType', None, None, ), # 8
    (9, TType.STRING, 'storageResourceId', None, None, ), # 9
    (10, TType.STRING, 'storageResourceHostName', None, None, ), # 10
    (11, TType.I32, 'dataMovementProtocol', None, None, ), # 11
    (12, TType.I64, 'hostPort', None, None, ), # 12
    (13, TType.STRING, 'filePath', None, None, ), # 13
    (14, TType.STRING, 'replicaUrl', None, None, ), # 14
    (15, TType.MAP, 'replicaMetadata', (TType.STRING,None,TType.STRING,None), None, ), # 15
  )

  def __init__(self, replicaId=None, resourceId=None, replicaName=None, replicaDescription=None, creationTime=None, lastModifiedTime=None, replicaLocationCategory=None, replicaPersistentType=None, storageResourceId=None, storageResourceHostName=None, dataMovementProtocol=None, hostPort=None, filePath=None, replicaUrl=None, replicaMetadata=None,):
    self.replicaId = replicaId
    self.resourceId = resourceId
    self.replicaName = replicaName
    self.replicaDescription = replicaDescription
    self.creationTime = creationTime
    self.lastModifiedTime = lastModifiedTime
    self.replicaLocationCategory = replicaLocationCategory
    self.replicaPersistentType = replicaPersistentType
    self.storageResourceId = storageResourceId
    self.storageResourceHostName = storageResourceHostName
    self.dataMovementProtocol = dataMovementProtocol
    self.hostPort = hostPort
    self.filePath = filePath
    self.replicaUrl = replicaUrl
    self.replicaMetadata = replicaMetadata

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.STRING:
          self.replicaId = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.STRING:
          self.resourceId = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.STRING:
          self.replicaName = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.STRING:
          self.replicaDescription = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 5:
        if ftype == TType.I64:
          self.creationTime = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 6:
        if ftype == TType.I64:
          self.lastModifiedTime = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 7:
        if ftype == TType.I32:
          self.replicaLocationCategory = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 8:
        if ftype == TType.I32:
          self.replicaPersistentType = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 9:
        if ftype == TType.STRING:
          self.storageResourceId = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 10:
        if ftype == TType.STRING:
          self.storageResourceHostName = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 11:
        if ftype == TType.I32:
          self.dataMovementProtocol = iprot.readI32();
        else:
          iprot.skip(ftype)
      elif fid == 12:
        if ftype == TType.I64:
          self.hostPort = iprot.readI64();
        else:
          iprot.skip(ftype)
      elif fid == 13:
        if ftype == TType.STRING:
          self.filePath = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 14:
        if ftype == TType.STRING:
          self.replicaUrl = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 15:
        if ftype == TType.MAP:
          self.replicaMetadata = {}
          (_ktype24, _vtype25, _size23 ) = iprot.readMapBegin()
          for _i27 in xrange(_size23):
            _key28 = iprot.readString();
            _val29 = iprot.readString();
            self.replicaMetadata[_key28] = _val29
          iprot.readMapEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('DataReplicaLocationModel')
    if self.replicaId is not None:
      oprot.writeFieldBegin('replicaId', TType.STRING, 1)
      oprot.writeString(self.replicaId)
      oprot.writeFieldEnd()
    if self.resourceId is not None:
      oprot.writeFieldBegin('resourceId', TType.STRING, 2)
      oprot.writeString(self.resourceId)
      oprot.writeFieldEnd()
    if self.replicaName is not None:
      oprot.writeFieldBegin('replicaName', TType.STRING, 3)
      oprot.writeString(self.replicaName)
      oprot.writeFieldEnd()
    if self.replicaDescription is not None:
      oprot.writeFieldBegin('replicaDescription', TType.STRING, 4)
      oprot.writeString(self.replicaDescription)
      oprot.writeFieldEnd()
    if self.creationTime is not None:
      oprot.writeFieldBegin('creationTime', TType.I64, 5)
      oprot.writeI64(self.creationTime)
      oprot.writeFieldEnd()
    if self.lastModifiedTime is not None:
      oprot.writeFieldBegin('lastModifiedTime', TType.I64, 6)
      oprot.writeI64(self.lastModifiedTime)
      oprot.writeFieldEnd()
    if self.replicaLocationCategory is not None:
      oprot.writeFieldBegin('replicaLocationCategory', TType.I32, 7)
      oprot.writeI32(self.replicaLocationCategory)
      oprot.writeFieldEnd()
    if self.replicaPersistentType is not None:
      oprot.writeFieldBegin('replicaPersistentType', TType.I32, 8)
      oprot.writeI32(self.replicaPersistentType)
      oprot.writeFieldEnd()
    if self.storageResourceId is not None:
      oprot.writeFieldBegin('storageResourceId', TType.STRING, 9)
      oprot.writeString(self.storageResourceId)
      oprot.writeFieldEnd()
    if self.storageResourceHostName is not None:
      oprot.writeFieldBegin('storageResourceHostName', TType.STRING, 10)
      oprot.writeString(self.storageResourceHostName)
      oprot.writeFieldEnd()
    if self.dataMovementProtocol is not None:
      oprot.writeFieldBegin('dataMovementProtocol', TType.I32, 11)
      oprot.writeI32(self.dataMovementProtocol)
      oprot.writeFieldEnd()
    if self.hostPort is not None:
      oprot.writeFieldBegin('hostPort', TType.I64, 12)
      oprot.writeI64(self.hostPort)
      oprot.writeFieldEnd()
    if self.filePath is not None:
      oprot.writeFieldBegin('filePath', TType.STRING, 13)
      oprot.writeString(self.filePath)
      oprot.writeFieldEnd()
    if self.replicaUrl is not None:
      oprot.writeFieldBegin('replicaUrl', TType.STRING, 14)
      oprot.writeString(self.replicaUrl)
      oprot.writeFieldEnd()
    if self.replicaMetadata is not None:
      oprot.writeFieldBegin('replicaMetadata', TType.MAP, 15)
      oprot.writeMapBegin(TType.STRING, TType.STRING, len(self.replicaMetadata))
      for kiter30,viter31 in self.replicaMetadata.items():
        oprot.writeString(kiter30)
        oprot.writeString(viter31)
      oprot.writeMapEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __hash__(self):
    value = 17
    value = (value * 31) ^ hash(self.replicaId)
    value = (value * 31) ^ hash(self.resourceId)
    value = (value * 31) ^ hash(self.replicaName)
    value = (value * 31) ^ hash(self.replicaDescription)
    value = (value * 31) ^ hash(self.creationTime)
    value = (value * 31) ^ hash(self.lastModifiedTime)
    value = (value * 31) ^ hash(self.replicaLocationCategory)
    value = (value * 31) ^ hash(self.replicaPersistentType)
    value = (value * 31) ^ hash(self.storageResourceId)
    value = (value * 31) ^ hash(self.storageResourceHostName)
    value = (value * 31) ^ hash(self.dataMovementProtocol)
    value = (value * 31) ^ hash(self.hostPort)
    value = (value * 31) ^ hash(self.filePath)
    value = (value * 31) ^ hash(self.replicaUrl)
    value = (value * 31) ^ hash(self.replicaMetadata)
    return value

  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)
