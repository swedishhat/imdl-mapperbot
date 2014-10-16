/****************************************************************************
** Meta object code from reading C++ file 'graph_manager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rgbdslam_v2/src/graph_manager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graph_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraphManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      47,   13,   13,   13, 0x05,
      70,   62,   13,   13, 0x05,
      90,   62,   13,   13, 0x05,
     130,  112,   13,   13, 0x05,
     173,   13,   13,   13, 0x05,
     281,  265,   13,   13, 0x05,
     318,   62,   13,   13, 0x05,
     349,  339,   13,   13, 0x05,
     394,   13,   13,   13, 0x05,
     411,   13,   13,   13, 0x05,
     427,   13,   13,   13, 0x05,
     481,  466,   13,   13, 0x05,
     525,  510,   13,   13, 0x05,
     557,  555,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     588,   13,   13,   13, 0x0a,
     596,   13,   13,   13, 0x0a,
     617,  614,   13,   13, 0x0a,
     657,   13,   13,   13, 0x0a,
     676,  614,   13,   13, 0x0a,
     754,  724,  717,   13, 0x0a,
     806,  789,  717,   13, 0x2a,
     838,  833,  717,   13, 0x2a,
     860,   13,  717,   13, 0x2a,
     876,   13,   13,   13, 0x0a,
     906,   13,  901,   13, 0x0a,
     938,   13,   13,   13, 0x0a,
     957,   13,   13,   13, 0x0a,
     983,  977,   13,   13, 0x0a,
    1046, 1024,   13,   13, 0x0a,
    1066,   13,   13,   13, 0x2a,
    1091, 1082,   13,   13, 0x0a,
    1117, 1082,   13,   13, 0x0a,
    1161, 1138,   13,   13, 0x0a,
    1210, 1196,   13,   13, 0x2a,
    1258, 1240,   13,   13, 0x0a,
    1286, 1082,   13,   13, 0x2a,
    1309, 1240,   13,   13, 0x0a,
    1339, 1082,   13,   13, 0x2a,
    1364, 1240,   13,   13, 0x0a,
    1390, 1082,   13,   13, 0x2a,
    1442, 1411,   13,   13, 0x0a,
    1484, 1471,   13,   13, 0x2a,
    1508, 1082,   13,   13, 0x0a,
    1530,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GraphManager[] = {
    "GraphManager\0\0newTransformationMatrix(QString)\0"
    "sendFinished()\0message\0setGUIInfo(QString)\0"
    "setGUIStatus(QString)\0pc,transformation\0"
    "setPointCloud(pointcloud_type*,QMatrix4x4)\0"
    "setFeatures(const std::vector<Eigen::Vector4f,Eigen::aligned_allocator"
    "<Eigen::Vector4f> >*)\0"
    "transformations\0updateTransforms(QList<QMatrix4x4>*)\0"
    "setGUIInfo2(QString)\0edge_list\0"
    "setGraphEdges(const QList<QPair<int,int> >*)\0"
    "deleteLastNode()\0resetGLViewer()\0"
    "setGraph(const g2o::OptimizableGraph*)\0"
    "id,message,max\0iamBusy(int,const char*,int)\0"
    "id,message,val\0progress(int,const char*,int)\0"
    "r\0renderableOctomap(Renderable*)\0"
    "reset()\0deleteLastFrame()\0pc\0"
    "clearPointCloud(const pointcloud_type*)\0"
    "clearPointClouds()\0"
    "reducePointCloud(const pointcloud_type*)\0"
    "double\0iter,nonthreaded,filebasename\0"
    "optimizeGraph(double,bool,QString)\0"
    "iter,nonthreaded\0optimizeGraph(double,bool)\0"
    "iter\0optimizeGraph(double)\0optimizeGraph()\0"
    "printEdgeErrors(QString)\0uint\0"
    "pruneEdgesWithErrorAbove(float)\0"
    "sanityCheck(float)\0toggleMapping(bool)\0"
    "x,y,z\0filterNodesByPosition(float,float,float)\0"
    "threaded_if_available\0sendAllClouds(bool)\0"
    "sendAllClouds()\0filename\0"
    "saveBagfileAsync(QString)\0"
    "saveBagfile(QString)\0file_basename,threaded\0"
    "saveIndividualClouds(QString,bool)\0"
    "file_basename\0saveIndividualClouds(QString)\0"
    "filename,threaded\0saveAllClouds(QString,bool)\0"
    "saveAllClouds(QString)\0"
    "saveAllFeatures(QString,bool)\0"
    "saveAllFeatures(QString)\0"
    "saveOctomap(QString,bool)\0"
    "saveOctomap(QString)\0"
    "filebasename,with_ground_truth\0"
    "saveTrajectory(QString,bool)\0filebasename\0"
    "saveTrajectory(QString)\0saveG2OGraph(QString)\0"
    "occupancyFilterClouds()\0"
};

void GraphManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraphManager *_t = static_cast<GraphManager *>(_o);
        switch (_id) {
        case 0: _t->newTransformationMatrix((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendFinished(); break;
        case 2: _t->setGUIInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setGUIStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setPointCloud((*reinterpret_cast< pointcloud_type*(*)>(_a[1])),(*reinterpret_cast< QMatrix4x4(*)>(_a[2]))); break;
        case 5: _t->setFeatures((*reinterpret_cast< const std::vector<Eigen::Vector4f,Eigen::aligned_allocator<Eigen::Vector4f> >*(*)>(_a[1]))); break;
        case 6: _t->updateTransforms((*reinterpret_cast< QList<QMatrix4x4>*(*)>(_a[1]))); break;
        case 7: _t->setGUIInfo2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setGraphEdges((*reinterpret_cast< const QList<QPair<int,int> >*(*)>(_a[1]))); break;
        case 9: _t->deleteLastNode(); break;
        case 10: _t->resetGLViewer(); break;
        case 11: _t->setGraph((*reinterpret_cast< const g2o::OptimizableGraph*(*)>(_a[1]))); break;
        case 12: _t->iamBusy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->renderableOctomap((*reinterpret_cast< Renderable*(*)>(_a[1]))); break;
        case 15: _t->reset(); break;
        case 16: _t->deleteLastFrame(); break;
        case 17: _t->clearPointCloud((*reinterpret_cast< const pointcloud_type*(*)>(_a[1]))); break;
        case 18: _t->clearPointClouds(); break;
        case 19: _t->reducePointCloud((*reinterpret_cast< const pointcloud_type*(*)>(_a[1]))); break;
        case 20: { double _r = _t->optimizeGraph((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 21: { double _r = _t->optimizeGraph((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 22: { double _r = _t->optimizeGraph((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 23: { double _r = _t->optimizeGraph();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 24: _t->printEdgeErrors((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: { uint _r = _t->pruneEdgesWithErrorAbove((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 26: _t->sanityCheck((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 27: _t->toggleMapping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->filterNodesByPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 29: _t->sendAllClouds((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->sendAllClouds(); break;
        case 31: _t->saveBagfileAsync((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->saveBagfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->saveIndividualClouds((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->saveIndividualClouds((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->saveAllClouds((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->saveAllClouds((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 37: _t->saveAllFeatures((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 38: _t->saveAllFeatures((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->saveOctomap((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->saveOctomap((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->saveTrajectory((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->saveTrajectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 43: _t->saveG2OGraph((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 44: _t->occupancyFilterClouds(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GraphManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraphManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphManager,
      qt_meta_data_GraphManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraphManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraphManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraphManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphManager))
        return static_cast<void*>(const_cast< GraphManager*>(this));
    return QObject::qt_metacast(_clname);
}

int GraphManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void GraphManager::newTransformationMatrix(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphManager::sendFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GraphManager::setGUIInfo(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GraphManager::setGUIStatus(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GraphManager::setPointCloud(pointcloud_type * _t1, QMatrix4x4 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GraphManager::setFeatures(const std::vector<Eigen::Vector4f,Eigen::aligned_allocator<Eigen::Vector4f> > * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GraphManager::updateTransforms(QList<QMatrix4x4> * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GraphManager::setGUIInfo2(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GraphManager::setGraphEdges(const QList<QPair<int,int> > * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GraphManager::deleteLastNode()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void GraphManager::resetGLViewer()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void GraphManager::setGraph(const g2o::OptimizableGraph * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GraphManager::iamBusy(int _t1, const char * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GraphManager::progress(int _t1, const char * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GraphManager::renderableOctomap(Renderable * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
