/****************************************************************************
** Meta object code from reading C++ file 'glviewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rgbdslam_v2/src/glviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GLViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      48,   42,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   83,    9,    9, 0x0a,
     107,   83,    9,    9, 0x0a,
     125,   83,    9,    9, 0x0a,
     149,  143,    9,    9, 0x0a,
     191,  172,    9,    9, 0x0a,
     218,  215,    9,    9, 0x0a,
     241,  215,    9,    9, 0x0a,
     263,  215,    9,    9, 0x0a,
     283,  215,    9,    9, 0x0a,
     304,  215,    9,    9, 0x0a,
     324,  215,    9,    9, 0x0a,
     346,  215,    9,    9, 0x0a,
     369,  215,    9,    9, 0x0a,
     393,  215,    9,    9, 0x0a,
     418,  215,    9,    9, 0x0a,
     446,  215,    9,    9, 0x0a,
     478,  465,    9,    9, 0x0a,
     542,  521,    9,    9, 0x0a,
     645,  634,    9,    9, 0x0a,
     692,  682,    9,    9, 0x0a,
     732,    9,    9,    9, 0x0a,
     749,    9,    9,    9, 0x0a,
     757,    9,    9,    9, 0x0a,
     787,  779,    9,    9, 0x0a,
     807,  805,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GLViewer[] = {
    "GLViewer\0\0cloudRendered(pointcloud_type*)\0"
    "x,y,z\0clickedPosition(float,float,float)\0"
    "angle\0setXRotation(int)\0setYRotation(int)\0"
    "setZRotation(int)\0shift\0setStereoShift(double)\0"
    "rot_step_in_degree\0setRotationGrid(double)\0"
    "on\0toggleFollowMode(bool)\0"
    "toggleShowEdges(bool)\0toggleShowIDs(bool)\0"
    "toggleShowGrid(bool)\0toggleShowTFs(bool)\0"
    "toggleShowPoses(bool)\0toggleShowClouds(bool)\0"
    "toggleShowOctoMap(bool)\0"
    "toggleShowFeatures(bool)\0"
    "toggleBackgroundColor(bool)\0"
    "toggleStereo(bool)\0pc,transform\0"
    "addPointCloud(pointcloud_type*,QMatrix4x4)\0"
    "feature_locations_3d\0"
    "addFeatures(const std::vector<Eigen::Vector4f,Eigen::aligned_allocator"
    "<Eigen::Vector4f> >*)\0"
    "transforms\0updateTransforms(QList<QMatrix4x4>*)\0"
    "edge_list\0setEdges(const QList<QPair<int,int> >*)\0"
    "deleteLastNode()\0reset()\0toggleTriangulation()\0"
    "filname\0drawToPS(QString)\0r\0"
    "setRenderable(Renderable*)\0"
};

void GLViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GLViewer *_t = static_cast<GLViewer *>(_o);
        switch (_id) {
        case 0: _t->cloudRendered((*reinterpret_cast< pointcloud_type*(*)>(_a[1]))); break;
        case 1: _t->clickedPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 2: _t->setXRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setYRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setZRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setStereoShift((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setRotationGrid((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->toggleFollowMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->toggleShowEdges((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toggleShowIDs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->toggleShowGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->toggleShowTFs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->toggleShowPoses((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->toggleShowClouds((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->toggleShowOctoMap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->toggleShowFeatures((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->toggleBackgroundColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->toggleStereo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->addPointCloud((*reinterpret_cast< pointcloud_type*(*)>(_a[1])),(*reinterpret_cast< QMatrix4x4(*)>(_a[2]))); break;
        case 19: _t->addFeatures((*reinterpret_cast< const std::vector<Eigen::Vector4f,Eigen::aligned_allocator<Eigen::Vector4f> >*(*)>(_a[1]))); break;
        case 20: _t->updateTransforms((*reinterpret_cast< QList<QMatrix4x4>*(*)>(_a[1]))); break;
        case 21: _t->setEdges((*reinterpret_cast< const QList<QPair<int,int> >*(*)>(_a[1]))); break;
        case 22: _t->deleteLastNode(); break;
        case 23: _t->reset(); break;
        case 24: _t->toggleTriangulation(); break;
        case 25: _t->drawToPS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->setRenderable((*reinterpret_cast< Renderable*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GLViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GLViewer::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLViewer,
      qt_meta_data_GLViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GLViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GLViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GLViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLViewer))
        return static_cast<void*>(const_cast< GLViewer*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void GLViewer::cloudRendered(pointcloud_type * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GLViewer::clickedPosition(float _t1, float _t2, float _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
