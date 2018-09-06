

#define protected public
#define private public

#include "moc.h"
#include "_cgo_export.h"

#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QByteArray>
#include <QCamera>
#include <QCameraImageCapture>
#include <QChildEvent>
#include <QDBusPendingCall>
#include <QDBusPendingCallWatcher>
#include <QEvent>
#include <QExtensionFactory>
#include <QExtensionManager>
#include <QGraphicsObject>
#include <QGraphicsWidget>
#include <QHash>
#include <QLayout>
#include <QMap>
#include <QMediaPlaylist>
#include <QMediaRecorder>
#include <QMetaMethod>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QOffscreenSurface>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPdfWriter>
#include <QPersistentModelIndex>
#include <QQuickItem>
#include <QRadioData>
#include <QSize>
#include <QString>
#include <QTime>
#include <QTimer>
#include <QTimerEvent>
#include <QVariant>
#include <QVector>
#include <QWidget>
#include <QWindow>


class ApproveTxCtx721036: public QObject
{
Q_OBJECT
Q_PROPERTY(QString remote READ remote WRITE setRemote NOTIFY remoteChanged)
Q_PROPERTY(QString transport READ transport WRITE setTransport NOTIFY transportChanged)
Q_PROPERTY(QString endpoint READ endpoint WRITE setEndpoint NOTIFY endpointChanged)
Q_PROPERTY(QString data READ data WRITE setData NOTIFY dataChanged)
Q_PROPERTY(QString from READ from WRITE setFrom NOTIFY fromChanged)
Q_PROPERTY(QString to READ to WRITE setTo NOTIFY toChanged)
Q_PROPERTY(QString gas READ gas WRITE setGas NOTIFY gasChanged)
Q_PROPERTY(QString gasPrice READ gasPrice WRITE setGasPrice NOTIFY gasPriceChanged)
Q_PROPERTY(QString nonce READ nonce WRITE setNonce NOTIFY nonceChanged)
Q_PROPERTY(QString value READ value WRITE setValue NOTIFY valueChanged)
public:
	ApproveTxCtx721036(QObject *parent = Q_NULLPTR) : QObject(parent) {qRegisterMetaType<quintptr>("quintptr");ApproveTxCtx721036_ApproveTxCtx721036_QRegisterMetaType();ApproveTxCtx721036_ApproveTxCtx721036_QRegisterMetaTypes();callbackApproveTxCtx721036_Constructor(this);};
	void Signal_Clicked(qint32 b) { callbackApproveTxCtx721036_Clicked(this, b); };
	QString remote() { return ({ Moc_PackedString tempVal = callbackApproveTxCtx721036_Remote(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setRemote(QString remote) { QByteArray t41ffe5 = remote.toUtf8(); Moc_PackedString remotePacked = { const_cast<char*>(t41ffe5.prepend("WHITESPACE").constData()+10), t41ffe5.size()-10 };callbackApproveTxCtx721036_SetRemote(this, remotePacked); };
	void Signal_RemoteChanged(QString remote) { QByteArray t41ffe5 = remote.toUtf8(); Moc_PackedString remotePacked = { const_cast<char*>(t41ffe5.prepend("WHITESPACE").constData()+10), t41ffe5.size()-10 };callbackApproveTxCtx721036_RemoteChanged(this, remotePacked); };
	QString transport() { return ({ Moc_PackedString tempVal = callbackApproveTxCtx721036_Transport(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setTransport(QString transport) { QByteArray ta8e601 = transport.toUtf8(); Moc_PackedString transportPacked = { const_cast<char*>(ta8e601.prepend("WHITESPACE").constData()+10), ta8e601.size()-10 };callbackApproveTxCtx721036_SetTransport(this, transportPacked); };
	void Signal_TransportChanged(QString transport) { QByteArray ta8e601 = transport.toUtf8(); Moc_PackedString transportPacked = { const_cast<char*>(ta8e601.prepend("WHITESPACE").constData()+10), ta8e601.size()-10 };callbackApproveTxCtx721036_TransportChanged(this, transportPacked); };
	QString endpoint() { return ({ Moc_PackedString tempVal = callbackApproveTxCtx721036_Endpoint(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setEndpoint(QString endpoint) { QByteArray te13fe4 = endpoint.toUtf8(); Moc_PackedString endpointPacked = { const_cast<char*>(te13fe4.prepend("WHITESPACE").constData()+10), te13fe4.size()-10 };callbackApproveTxCtx721036_SetEndpoint(this, endpointPacked); };
	void Signal_EndpointChanged(QString endpoint) { QByteArray te13fe4 = endpoint.toUtf8(); Moc_PackedString endpointPacked = { const_cast<char*>(te13fe4.prepend("WHITESPACE").constData()+10), te13fe4.size()-10 };callbackApproveTxCtx721036_EndpointChanged(this, endpointPacked); };
	QString data() { return ({ Moc_PackedString tempVal = callbackApproveTxCtx721036_Data(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setData(QString data) { QByteArray ta17c9a = data.toUtf8(); Moc_PackedString dataPacked = { const_cast<char*>(ta17c9a.prepend("WHITESPACE").constData()+10), ta17c9a.size()-10 };callbackApproveTxCtx721036_SetData(this, dataPacked); };
	void Signal_DataChanged(QString data) { QByteArray ta17c9a = data.toUtf8(); Moc_PackedString dataPacked = { const_cast<char*>(ta17c9a.prepend("WHITESPACE").constData()+10), ta17c9a.size()-10 };callbackApproveTxCtx721036_DataChanged(this, dataPacked); };
	QString from() { return ({ Moc_PackedString tempVal = callbackApproveTxCtx721036_From(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setFrom(QString from) { QByteArray t0b1e95 = from.toUtf8(); Moc_PackedString fromPacked = { const_cast<char*>(t0b1e95.prepend("WHITESPACE").constData()+10), t0b1e95.size()-10 };callbackApproveTxCtx721036_SetFrom(this, fromPacked); };
	void Signal_FromChanged(QString from) { QByteArray t0b1e95 = from.toUtf8(); Moc_PackedString fromPacked = { const_cast<char*>(t0b1e95.prepend("WHITESPACE").constData()+10), t0b1e95.size()-10 };callbackApproveTxCtx721036_FromChanged(this, fromPacked); };
	QString to() { return ({ Moc_PackedString tempVal = callbackApproveTxCtx721036_To(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setTo(QString to) { QByteArray t4374aa = to.toUtf8(); Moc_PackedString toPacked = { const_cast<char*>(t4374aa.prepend("WHITESPACE").constData()+10), t4374aa.size()-10 };callbackApproveTxCtx721036_SetTo(this, toPacked); };
	void Signal_ToChanged(QString to) { QByteArray t4374aa = to.toUtf8(); Moc_PackedString toPacked = { const_cast<char*>(t4374aa.prepend("WHITESPACE").constData()+10), t4374aa.size()-10 };callbackApproveTxCtx721036_ToChanged(this, toPacked); };
	QString gas() { return ({ Moc_PackedString tempVal = callbackApproveTxCtx721036_Gas(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setGas(QString gas) { QByteArray tfacafa = gas.toUtf8(); Moc_PackedString gasPacked = { const_cast<char*>(tfacafa.prepend("WHITESPACE").constData()+10), tfacafa.size()-10 };callbackApproveTxCtx721036_SetGas(this, gasPacked); };
	void Signal_GasChanged(QString gas) { QByteArray tfacafa = gas.toUtf8(); Moc_PackedString gasPacked = { const_cast<char*>(tfacafa.prepend("WHITESPACE").constData()+10), tfacafa.size()-10 };callbackApproveTxCtx721036_GasChanged(this, gasPacked); };
	QString gasPrice() { return ({ Moc_PackedString tempVal = callbackApproveTxCtx721036_GasPrice(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setGasPrice(QString gasPrice) { QByteArray t72824c = gasPrice.toUtf8(); Moc_PackedString gasPricePacked = { const_cast<char*>(t72824c.prepend("WHITESPACE").constData()+10), t72824c.size()-10 };callbackApproveTxCtx721036_SetGasPrice(this, gasPricePacked); };
	void Signal_GasPriceChanged(QString gasPrice) { QByteArray t72824c = gasPrice.toUtf8(); Moc_PackedString gasPricePacked = { const_cast<char*>(t72824c.prepend("WHITESPACE").constData()+10), t72824c.size()-10 };callbackApproveTxCtx721036_GasPriceChanged(this, gasPricePacked); };
	QString nonce() { return ({ Moc_PackedString tempVal = callbackApproveTxCtx721036_Nonce(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setNonce(QString nonce) { QByteArray t49afa7 = nonce.toUtf8(); Moc_PackedString noncePacked = { const_cast<char*>(t49afa7.prepend("WHITESPACE").constData()+10), t49afa7.size()-10 };callbackApproveTxCtx721036_SetNonce(this, noncePacked); };
	void Signal_NonceChanged(QString nonce) { QByteArray t49afa7 = nonce.toUtf8(); Moc_PackedString noncePacked = { const_cast<char*>(t49afa7.prepend("WHITESPACE").constData()+10), t49afa7.size()-10 };callbackApproveTxCtx721036_NonceChanged(this, noncePacked); };
	QString value() { return ({ Moc_PackedString tempVal = callbackApproveTxCtx721036_Value(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setValue(QString value) { QByteArray tf32b67 = value.toUtf8(); Moc_PackedString valuePacked = { const_cast<char*>(tf32b67.prepend("WHITESPACE").constData()+10), tf32b67.size()-10 };callbackApproveTxCtx721036_SetValue(this, valuePacked); };
	void Signal_ValueChanged(QString value) { QByteArray tf32b67 = value.toUtf8(); Moc_PackedString valuePacked = { const_cast<char*>(tf32b67.prepend("WHITESPACE").constData()+10), tf32b67.size()-10 };callbackApproveTxCtx721036_ValueChanged(this, valuePacked); };
	 ~ApproveTxCtx721036() { callbackApproveTxCtx721036_DestroyApproveTxCtx(this); };
	bool event(QEvent * e) { return callbackApproveTxCtx721036_Event(this, e) != 0; };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackApproveTxCtx721036_EventFilter(this, watched, event) != 0; };
	
	void childEvent(QChildEvent * event) { callbackApproveTxCtx721036_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackApproveTxCtx721036_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackApproveTxCtx721036_CustomEvent(this, event); };
	void deleteLater() { callbackApproveTxCtx721036_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackApproveTxCtx721036_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackApproveTxCtx721036_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray taa2c4f = objectName.toUtf8(); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f.prepend("WHITESPACE").constData()+10), taa2c4f.size()-10 };callbackApproveTxCtx721036_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackApproveTxCtx721036_TimerEvent(this, event); };
	
	QString remoteDefault() { return _remote; };
	void setRemoteDefault(QString p) { if (p != _remote) { _remote = p; remoteChanged(_remote); } };
	QString transportDefault() { return _transport; };
	void setTransportDefault(QString p) { if (p != _transport) { _transport = p; transportChanged(_transport); } };
	QString endpointDefault() { return _endpoint; };
	void setEndpointDefault(QString p) { if (p != _endpoint) { _endpoint = p; endpointChanged(_endpoint); } };
	QString dataDefault() { return _data; };
	void setDataDefault(QString p) { if (p != _data) { _data = p; dataChanged(_data); } };
	QString fromDefault() { return _from; };
	void setFromDefault(QString p) { if (p != _from) { _from = p; fromChanged(_from); } };
	QString toDefault() { return _to; };
	void setToDefault(QString p) { if (p != _to) { _to = p; toChanged(_to); } };
	QString gasDefault() { return _gas; };
	void setGasDefault(QString p) { if (p != _gas) { _gas = p; gasChanged(_gas); } };
	QString gasPriceDefault() { return _gasPrice; };
	void setGasPriceDefault(QString p) { if (p != _gasPrice) { _gasPrice = p; gasPriceChanged(_gasPrice); } };
	QString nonceDefault() { return _nonce; };
	void setNonceDefault(QString p) { if (p != _nonce) { _nonce = p; nonceChanged(_nonce); } };
	QString valueDefault() { return _value; };
	void setValueDefault(QString p) { if (p != _value) { _value = p; valueChanged(_value); } };
signals:
	void clicked(qint32 b);
	void remoteChanged(QString remote);
	void transportChanged(QString transport);
	void endpointChanged(QString endpoint);
	void dataChanged(QString data);
	void fromChanged(QString from);
	void toChanged(QString to);
	void gasChanged(QString gas);
	void gasPriceChanged(QString gasPrice);
	void nonceChanged(QString nonce);
	void valueChanged(QString value);
public slots:
private:
	QString _remote;
	QString _transport;
	QString _endpoint;
	QString _data;
	QString _from;
	QString _to;
	QString _gas;
	QString _gasPrice;
	QString _nonce;
	QString _value;
};

Q_DECLARE_METATYPE(ApproveTxCtx721036*)


void ApproveTxCtx721036_ApproveTxCtx721036_QRegisterMetaTypes() {
	qRegisterMetaType<QString>();
}

class CustomListModel721036: public QAbstractListModel
{
Q_OBJECT
public:
	CustomListModel721036(QObject *parent = Q_NULLPTR) : QAbstractListModel(parent) {qRegisterMetaType<quintptr>("quintptr");CustomListModel721036_CustomListModel721036_QRegisterMetaType();CustomListModel721036_CustomListModel721036_QRegisterMetaTypes();callbackCustomListModel721036_Constructor(this);};
	void Signal_Clear() { callbackCustomListModel721036_Clear(this); };
	void Signal_Add(quintptr account) { callbackCustomListModel721036_Add(this, account); };
	void Signal_Clicked(qint32 b) { callbackCustomListModel721036_Clicked(this, b); };
	void Signal_OnCheckStateChanged(qint32 i, bool checked) { callbackCustomListModel721036_OnCheckStateChanged(this, i, checked); };
	 ~CustomListModel721036() { callbackCustomListModel721036_DestroyCustomListModel(this); };
	bool dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) { return callbackCustomListModel721036_DropMimeData(this, const_cast<QMimeData*>(data), action, row, column, const_cast<QModelIndex*>(&parent)) != 0; };
	
	QModelIndex index(int row, int column, const QModelIndex & parent) const { return *static_cast<QModelIndex*>(callbackCustomListModel721036_Index(const_cast<void*>(static_cast<const void*>(this)), row, column, const_cast<QModelIndex*>(&parent))); };
	QModelIndex sibling(int row, int column, const QModelIndex & idx) const { return *static_cast<QModelIndex*>(callbackCustomListModel721036_Sibling(const_cast<void*>(static_cast<const void*>(this)), row, column, const_cast<QModelIndex*>(&idx))); };
	Qt::ItemFlags flags(const QModelIndex & index) const { return static_cast<Qt::ItemFlag>(callbackCustomListModel721036_Flags(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&index))); };
	
	bool insertColumns(int column, int count, const QModelIndex & parent) { return callbackCustomListModel721036_InsertColumns(this, column, count, const_cast<QModelIndex*>(&parent)) != 0; };
	bool insertRows(int row, int count, const QModelIndex & parent) { return callbackCustomListModel721036_InsertRows(this, row, count, const_cast<QModelIndex*>(&parent)) != 0; };
	bool moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild) { return callbackCustomListModel721036_MoveColumns(this, const_cast<QModelIndex*>(&sourceParent), sourceColumn, count, const_cast<QModelIndex*>(&destinationParent), destinationChild) != 0; };
	bool moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild) { return callbackCustomListModel721036_MoveRows(this, const_cast<QModelIndex*>(&sourceParent), sourceRow, count, const_cast<QModelIndex*>(&destinationParent), destinationChild) != 0; };
	bool removeColumns(int column, int count, const QModelIndex & parent) { return callbackCustomListModel721036_RemoveColumns(this, column, count, const_cast<QModelIndex*>(&parent)) != 0; };
	bool removeRows(int row, int count, const QModelIndex & parent) { return callbackCustomListModel721036_RemoveRows(this, row, count, const_cast<QModelIndex*>(&parent)) != 0; };
	bool setData(const QModelIndex & index, const QVariant & value, int role) { return callbackCustomListModel721036_SetData(this, const_cast<QModelIndex*>(&index), const_cast<QVariant*>(&value), role) != 0; };
	bool setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role) { return callbackCustomListModel721036_SetHeaderData(this, section, orientation, const_cast<QVariant*>(&value), role) != 0; };
	bool setItemData(const QModelIndex & index, const QMap<int, QVariant> & roles) { return callbackCustomListModel721036_SetItemData(this, const_cast<QModelIndex*>(&index), ({ QMap<int, QVariant>* tmpValue = const_cast<QMap<int, QVariant>*>(&roles); Moc_PackedList { tmpValue, tmpValue->size() }; })) != 0; };
	bool submit() { return callbackCustomListModel721036_Submit(this) != 0; };
	void Signal_ColumnsAboutToBeInserted(const QModelIndex & parent, int first, int last) { callbackCustomListModel721036_ColumnsAboutToBeInserted(this, const_cast<QModelIndex*>(&parent), first, last); };
	void Signal_ColumnsAboutToBeMoved(const QModelIndex & sourceParent, int sourceStart, int sourceEnd, const QModelIndex & destinationParent, int destinationColumn) { callbackCustomListModel721036_ColumnsAboutToBeMoved(this, const_cast<QModelIndex*>(&sourceParent), sourceStart, sourceEnd, const_cast<QModelIndex*>(&destinationParent), destinationColumn); };
	void Signal_ColumnsAboutToBeRemoved(const QModelIndex & parent, int first, int last) { callbackCustomListModel721036_ColumnsAboutToBeRemoved(this, const_cast<QModelIndex*>(&parent), first, last); };
	void Signal_ColumnsInserted(const QModelIndex & parent, int first, int last) { callbackCustomListModel721036_ColumnsInserted(this, const_cast<QModelIndex*>(&parent), first, last); };
	void Signal_ColumnsMoved(const QModelIndex & parent, int start, int end, const QModelIndex & destination, int column) { callbackCustomListModel721036_ColumnsMoved(this, const_cast<QModelIndex*>(&parent), start, end, const_cast<QModelIndex*>(&destination), column); };
	void Signal_ColumnsRemoved(const QModelIndex & parent, int first, int last) { callbackCustomListModel721036_ColumnsRemoved(this, const_cast<QModelIndex*>(&parent), first, last); };
	void Signal_DataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector<int> & roles) { callbackCustomListModel721036_DataChanged(this, const_cast<QModelIndex*>(&topLeft), const_cast<QModelIndex*>(&bottomRight), ({ QVector<int>* tmpValue = const_cast<QVector<int>*>(&roles); Moc_PackedList { tmpValue, tmpValue->size() }; })); };
	void fetchMore(const QModelIndex & parent) { callbackCustomListModel721036_FetchMore(this, const_cast<QModelIndex*>(&parent)); };
	void Signal_HeaderDataChanged(Qt::Orientation orientation, int first, int last) { callbackCustomListModel721036_HeaderDataChanged(this, orientation, first, last); };
	void Signal_LayoutAboutToBeChanged(const QList<QPersistentModelIndex> & parents, QAbstractItemModel::LayoutChangeHint hint) { callbackCustomListModel721036_LayoutAboutToBeChanged(this, ({ QList<QPersistentModelIndex>* tmpValue = const_cast<QList<QPersistentModelIndex>*>(&parents); Moc_PackedList { tmpValue, tmpValue->size() }; }), hint); };
	void Signal_LayoutChanged(const QList<QPersistentModelIndex> & parents, QAbstractItemModel::LayoutChangeHint hint) { callbackCustomListModel721036_LayoutChanged(this, ({ QList<QPersistentModelIndex>* tmpValue = const_cast<QList<QPersistentModelIndex>*>(&parents); Moc_PackedList { tmpValue, tmpValue->size() }; }), hint); };
	void Signal_ModelAboutToBeReset() { callbackCustomListModel721036_ModelAboutToBeReset(this); };
	void Signal_ModelReset() { callbackCustomListModel721036_ModelReset(this); };
	void resetInternalData() { callbackCustomListModel721036_ResetInternalData(this); };
	void revert() { callbackCustomListModel721036_Revert(this); };
	void Signal_RowsAboutToBeInserted(const QModelIndex & parent, int start, int end) { callbackCustomListModel721036_RowsAboutToBeInserted(this, const_cast<QModelIndex*>(&parent), start, end); };
	void Signal_RowsAboutToBeMoved(const QModelIndex & sourceParent, int sourceStart, int sourceEnd, const QModelIndex & destinationParent, int destinationRow) { callbackCustomListModel721036_RowsAboutToBeMoved(this, const_cast<QModelIndex*>(&sourceParent), sourceStart, sourceEnd, const_cast<QModelIndex*>(&destinationParent), destinationRow); };
	void Signal_RowsAboutToBeRemoved(const QModelIndex & parent, int first, int last) { callbackCustomListModel721036_RowsAboutToBeRemoved(this, const_cast<QModelIndex*>(&parent), first, last); };
	void Signal_RowsInserted(const QModelIndex & parent, int first, int last) { callbackCustomListModel721036_RowsInserted(this, const_cast<QModelIndex*>(&parent), first, last); };
	void Signal_RowsMoved(const QModelIndex & parent, int start, int end, const QModelIndex & destination, int row) { callbackCustomListModel721036_RowsMoved(this, const_cast<QModelIndex*>(&parent), start, end, const_cast<QModelIndex*>(&destination), row); };
	void Signal_RowsRemoved(const QModelIndex & parent, int first, int last) { callbackCustomListModel721036_RowsRemoved(this, const_cast<QModelIndex*>(&parent), first, last); };
	void sort(int column, Qt::SortOrder order) { callbackCustomListModel721036_Sort(this, column, order); };
	QHash<int, QByteArray> roleNames() const { return ({ QHash<int, QByteArray>* tmpP = static_cast<QHash<int, QByteArray>*>(callbackCustomListModel721036_RoleNames(const_cast<void*>(static_cast<const void*>(this)))); QHash<int, QByteArray> tmpV = *tmpP; tmpP->~QHash(); free(tmpP); tmpV; }); };
	QMap<int, QVariant> itemData(const QModelIndex & index) const { return ({ QMap<int, QVariant>* tmpP = static_cast<QMap<int, QVariant>*>(callbackCustomListModel721036_ItemData(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&index))); QMap<int, QVariant> tmpV = *tmpP; tmpP->~QMap(); free(tmpP); tmpV; }); };
	QMimeData * mimeData(const QModelIndexList & indexes) const { return static_cast<QMimeData*>(callbackCustomListModel721036_MimeData(const_cast<void*>(static_cast<const void*>(this)), ({ QList<QModelIndex>* tmpValue = new QList<QModelIndex>(indexes); Moc_PackedList { tmpValue, tmpValue->size() }; }))); };
	QModelIndex buddy(const QModelIndex & index) const { return *static_cast<QModelIndex*>(callbackCustomListModel721036_Buddy(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&index))); };
	QModelIndex parent(const QModelIndex & index) const { return *static_cast<QModelIndex*>(callbackCustomListModel721036_Parent(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&index))); };
	QList<QModelIndex> match(const QModelIndex & start, int role, const QVariant & value, int hits, Qt::MatchFlags flags) const { return ({ QList<QModelIndex>* tmpP = static_cast<QList<QModelIndex>*>(callbackCustomListModel721036_Match(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&start), role, const_cast<QVariant*>(&value), hits, flags)); QList<QModelIndex> tmpV = *tmpP; tmpP->~QList(); free(tmpP); tmpV; }); };
	QSize span(const QModelIndex & index) const { return *static_cast<QSize*>(callbackCustomListModel721036_Span(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&index))); };
	QStringList mimeTypes() const { return ({ Moc_PackedString tempVal = callbackCustomListModel721036_MimeTypes(const_cast<void*>(static_cast<const void*>(this))); QStringList ret = QString::fromUtf8(tempVal.data, tempVal.len).split("|", QString::SkipEmptyParts); free(tempVal.data); ret; }); };
	QVariant data(const QModelIndex & index, int role) const { return *static_cast<QVariant*>(callbackCustomListModel721036_Data(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&index), role)); };
	QVariant headerData(int section, Qt::Orientation orientation, int role) const { return *static_cast<QVariant*>(callbackCustomListModel721036_HeaderData(const_cast<void*>(static_cast<const void*>(this)), section, orientation, role)); };
	Qt::DropActions supportedDragActions() const { return static_cast<Qt::DropAction>(callbackCustomListModel721036_SupportedDragActions(const_cast<void*>(static_cast<const void*>(this)))); };
	Qt::DropActions supportedDropActions() const { return static_cast<Qt::DropAction>(callbackCustomListModel721036_SupportedDropActions(const_cast<void*>(static_cast<const void*>(this)))); };
	bool canDropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) const { return callbackCustomListModel721036_CanDropMimeData(const_cast<void*>(static_cast<const void*>(this)), const_cast<QMimeData*>(data), action, row, column, const_cast<QModelIndex*>(&parent)) != 0; };
	bool canFetchMore(const QModelIndex & parent) const { return callbackCustomListModel721036_CanFetchMore(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&parent)) != 0; };
	bool hasChildren(const QModelIndex & parent) const { return callbackCustomListModel721036_HasChildren(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&parent)) != 0; };
	int columnCount(const QModelIndex & parent) const { return callbackCustomListModel721036_ColumnCount(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&parent)); };
	int rowCount(const QModelIndex & parent) const { return callbackCustomListModel721036_RowCount(const_cast<void*>(static_cast<const void*>(this)), const_cast<QModelIndex*>(&parent)); };
	bool event(QEvent * e) { return callbackCustomListModel721036_Event(this, e) != 0; };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackCustomListModel721036_EventFilter(this, watched, event) != 0; };
	void childEvent(QChildEvent * event) { callbackCustomListModel721036_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackCustomListModel721036_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackCustomListModel721036_CustomEvent(this, event); };
	void deleteLater() { callbackCustomListModel721036_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackCustomListModel721036_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackCustomListModel721036_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray taa2c4f = objectName.toUtf8(); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f.prepend("WHITESPACE").constData()+10), taa2c4f.size()-10 };callbackCustomListModel721036_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackCustomListModel721036_TimerEvent(this, event); };
signals:
	void clear();
	void add(quintptr account);
	void clicked(qint32 b);
	void onCheckStateChanged(qint32 i, bool checked);
public slots:
private:
};

Q_DECLARE_METATYPE(CustomListModel721036*)


void CustomListModel721036_CustomListModel721036_QRegisterMetaTypes() {
}

class ApproveListingCtx721036: public QObject
{
Q_OBJECT
Q_PROPERTY(QString remote READ remote WRITE setRemote NOTIFY remoteChanged)
Q_PROPERTY(QString transport READ transport WRITE setTransport NOTIFY transportChanged)
Q_PROPERTY(QString endpoint READ endpoint WRITE setEndpoint NOTIFY endpointChanged)
Q_PROPERTY(QString from READ from WRITE setFrom NOTIFY fromChanged)
Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
Q_PROPERTY(QString rawData READ rawData WRITE setRawData NOTIFY rawDataChanged)
Q_PROPERTY(QString hash READ hash WRITE setHash NOTIFY hashChanged)
public:
	ApproveListingCtx721036(QObject *parent = Q_NULLPTR) : QObject(parent) {qRegisterMetaType<quintptr>("quintptr");ApproveListingCtx721036_ApproveListingCtx721036_QRegisterMetaType();ApproveListingCtx721036_ApproveListingCtx721036_QRegisterMetaTypes();callbackApproveListingCtx721036_Constructor(this);};
	QString remote() { return ({ Moc_PackedString tempVal = callbackApproveListingCtx721036_Remote(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setRemote(QString remote) { QByteArray t41ffe5 = remote.toUtf8(); Moc_PackedString remotePacked = { const_cast<char*>(t41ffe5.prepend("WHITESPACE").constData()+10), t41ffe5.size()-10 };callbackApproveListingCtx721036_SetRemote(this, remotePacked); };
	void Signal_RemoteChanged(QString remote) { QByteArray t41ffe5 = remote.toUtf8(); Moc_PackedString remotePacked = { const_cast<char*>(t41ffe5.prepend("WHITESPACE").constData()+10), t41ffe5.size()-10 };callbackApproveListingCtx721036_RemoteChanged(this, remotePacked); };
	QString transport() { return ({ Moc_PackedString tempVal = callbackApproveListingCtx721036_Transport(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setTransport(QString transport) { QByteArray ta8e601 = transport.toUtf8(); Moc_PackedString transportPacked = { const_cast<char*>(ta8e601.prepend("WHITESPACE").constData()+10), ta8e601.size()-10 };callbackApproveListingCtx721036_SetTransport(this, transportPacked); };
	void Signal_TransportChanged(QString transport) { QByteArray ta8e601 = transport.toUtf8(); Moc_PackedString transportPacked = { const_cast<char*>(ta8e601.prepend("WHITESPACE").constData()+10), ta8e601.size()-10 };callbackApproveListingCtx721036_TransportChanged(this, transportPacked); };
	QString endpoint() { return ({ Moc_PackedString tempVal = callbackApproveListingCtx721036_Endpoint(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setEndpoint(QString endpoint) { QByteArray te13fe4 = endpoint.toUtf8(); Moc_PackedString endpointPacked = { const_cast<char*>(te13fe4.prepend("WHITESPACE").constData()+10), te13fe4.size()-10 };callbackApproveListingCtx721036_SetEndpoint(this, endpointPacked); };
	void Signal_EndpointChanged(QString endpoint) { QByteArray te13fe4 = endpoint.toUtf8(); Moc_PackedString endpointPacked = { const_cast<char*>(te13fe4.prepend("WHITESPACE").constData()+10), te13fe4.size()-10 };callbackApproveListingCtx721036_EndpointChanged(this, endpointPacked); };
	QString from() { return ({ Moc_PackedString tempVal = callbackApproveListingCtx721036_From(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setFrom(QString from) { QByteArray t0b1e95 = from.toUtf8(); Moc_PackedString fromPacked = { const_cast<char*>(t0b1e95.prepend("WHITESPACE").constData()+10), t0b1e95.size()-10 };callbackApproveListingCtx721036_SetFrom(this, fromPacked); };
	void Signal_FromChanged(QString from) { QByteArray t0b1e95 = from.toUtf8(); Moc_PackedString fromPacked = { const_cast<char*>(t0b1e95.prepend("WHITESPACE").constData()+10), t0b1e95.size()-10 };callbackApproveListingCtx721036_FromChanged(this, fromPacked); };
	QString message() { return ({ Moc_PackedString tempVal = callbackApproveListingCtx721036_Message(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setMessage(QString message) { QByteArray t6f9b9a = message.toUtf8(); Moc_PackedString messagePacked = { const_cast<char*>(t6f9b9a.prepend("WHITESPACE").constData()+10), t6f9b9a.size()-10 };callbackApproveListingCtx721036_SetMessage(this, messagePacked); };
	void Signal_MessageChanged(QString message) { QByteArray t6f9b9a = message.toUtf8(); Moc_PackedString messagePacked = { const_cast<char*>(t6f9b9a.prepend("WHITESPACE").constData()+10), t6f9b9a.size()-10 };callbackApproveListingCtx721036_MessageChanged(this, messagePacked); };
	QString rawData() { return ({ Moc_PackedString tempVal = callbackApproveListingCtx721036_RawData(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setRawData(QString rawData) { QByteArray tcacc10 = rawData.toUtf8(); Moc_PackedString rawDataPacked = { const_cast<char*>(tcacc10.prepend("WHITESPACE").constData()+10), tcacc10.size()-10 };callbackApproveListingCtx721036_SetRawData(this, rawDataPacked); };
	void Signal_RawDataChanged(QString rawData) { QByteArray tcacc10 = rawData.toUtf8(); Moc_PackedString rawDataPacked = { const_cast<char*>(tcacc10.prepend("WHITESPACE").constData()+10), tcacc10.size()-10 };callbackApproveListingCtx721036_RawDataChanged(this, rawDataPacked); };
	QString hash() { return ({ Moc_PackedString tempVal = callbackApproveListingCtx721036_Hash(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setHash(QString hash) { QByteArray t2346ad = hash.toUtf8(); Moc_PackedString hashPacked = { const_cast<char*>(t2346ad.prepend("WHITESPACE").constData()+10), t2346ad.size()-10 };callbackApproveListingCtx721036_SetHash(this, hashPacked); };
	void Signal_HashChanged(QString hash) { QByteArray t2346ad = hash.toUtf8(); Moc_PackedString hashPacked = { const_cast<char*>(t2346ad.prepend("WHITESPACE").constData()+10), t2346ad.size()-10 };callbackApproveListingCtx721036_HashChanged(this, hashPacked); };
	 ~ApproveListingCtx721036() { callbackApproveListingCtx721036_DestroyApproveListingCtx(this); };
	bool event(QEvent * e) { return callbackApproveListingCtx721036_Event(this, e) != 0; };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackApproveListingCtx721036_EventFilter(this, watched, event) != 0; };
	
	void childEvent(QChildEvent * event) { callbackApproveListingCtx721036_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackApproveListingCtx721036_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackApproveListingCtx721036_CustomEvent(this, event); };
	void deleteLater() { callbackApproveListingCtx721036_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackApproveListingCtx721036_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackApproveListingCtx721036_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray taa2c4f = objectName.toUtf8(); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f.prepend("WHITESPACE").constData()+10), taa2c4f.size()-10 };callbackApproveListingCtx721036_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackApproveListingCtx721036_TimerEvent(this, event); };
	
	QString remoteDefault() { return _remote; };
	void setRemoteDefault(QString p) { if (p != _remote) { _remote = p; remoteChanged(_remote); } };
	QString transportDefault() { return _transport; };
	void setTransportDefault(QString p) { if (p != _transport) { _transport = p; transportChanged(_transport); } };
	QString endpointDefault() { return _endpoint; };
	void setEndpointDefault(QString p) { if (p != _endpoint) { _endpoint = p; endpointChanged(_endpoint); } };
	QString fromDefault() { return _from; };
	void setFromDefault(QString p) { if (p != _from) { _from = p; fromChanged(_from); } };
	QString messageDefault() { return _message; };
	void setMessageDefault(QString p) { if (p != _message) { _message = p; messageChanged(_message); } };
	QString rawDataDefault() { return _rawData; };
	void setRawDataDefault(QString p) { if (p != _rawData) { _rawData = p; rawDataChanged(_rawData); } };
	QString hashDefault() { return _hash; };
	void setHashDefault(QString p) { if (p != _hash) { _hash = p; hashChanged(_hash); } };
signals:
	void remoteChanged(QString remote);
	void transportChanged(QString transport);
	void endpointChanged(QString endpoint);
	void fromChanged(QString from);
	void messageChanged(QString message);
	void rawDataChanged(QString rawData);
	void hashChanged(QString hash);
public slots:
private:
	QString _remote;
	QString _transport;
	QString _endpoint;
	QString _from;
	QString _message;
	QString _rawData;
	QString _hash;
};

Q_DECLARE_METATYPE(ApproveListingCtx721036*)


void ApproveListingCtx721036_ApproveListingCtx721036_QRegisterMetaTypes() {
	qRegisterMetaType<QString>();
}

class ApproveSignDataCtx721036: public QObject
{
Q_OBJECT
Q_PROPERTY(QString remote READ remote WRITE setRemote NOTIFY remoteChanged)
Q_PROPERTY(QString transport READ transport WRITE setTransport NOTIFY transportChanged)
Q_PROPERTY(QString endpoint READ endpoint WRITE setEndpoint NOTIFY endpointChanged)
Q_PROPERTY(QString from READ from WRITE setFrom NOTIFY fromChanged)
Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
Q_PROPERTY(QString rawData READ rawData WRITE setRawData NOTIFY rawDataChanged)
Q_PROPERTY(QString hash READ hash WRITE setHash NOTIFY hashChanged)
public:
	ApproveSignDataCtx721036(QObject *parent = Q_NULLPTR) : QObject(parent) {qRegisterMetaType<quintptr>("quintptr");ApproveSignDataCtx721036_ApproveSignDataCtx721036_QRegisterMetaType();ApproveSignDataCtx721036_ApproveSignDataCtx721036_QRegisterMetaTypes();callbackApproveSignDataCtx721036_Constructor(this);};
	void Signal_Clicked(qint32 b) { callbackApproveSignDataCtx721036_Clicked(this, b); };
	QString remote() { return ({ Moc_PackedString tempVal = callbackApproveSignDataCtx721036_Remote(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setRemote(QString remote) { QByteArray t41ffe5 = remote.toUtf8(); Moc_PackedString remotePacked = { const_cast<char*>(t41ffe5.prepend("WHITESPACE").constData()+10), t41ffe5.size()-10 };callbackApproveSignDataCtx721036_SetRemote(this, remotePacked); };
	void Signal_RemoteChanged(QString remote) { QByteArray t41ffe5 = remote.toUtf8(); Moc_PackedString remotePacked = { const_cast<char*>(t41ffe5.prepend("WHITESPACE").constData()+10), t41ffe5.size()-10 };callbackApproveSignDataCtx721036_RemoteChanged(this, remotePacked); };
	QString transport() { return ({ Moc_PackedString tempVal = callbackApproveSignDataCtx721036_Transport(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setTransport(QString transport) { QByteArray ta8e601 = transport.toUtf8(); Moc_PackedString transportPacked = { const_cast<char*>(ta8e601.prepend("WHITESPACE").constData()+10), ta8e601.size()-10 };callbackApproveSignDataCtx721036_SetTransport(this, transportPacked); };
	void Signal_TransportChanged(QString transport) { QByteArray ta8e601 = transport.toUtf8(); Moc_PackedString transportPacked = { const_cast<char*>(ta8e601.prepend("WHITESPACE").constData()+10), ta8e601.size()-10 };callbackApproveSignDataCtx721036_TransportChanged(this, transportPacked); };
	QString endpoint() { return ({ Moc_PackedString tempVal = callbackApproveSignDataCtx721036_Endpoint(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setEndpoint(QString endpoint) { QByteArray te13fe4 = endpoint.toUtf8(); Moc_PackedString endpointPacked = { const_cast<char*>(te13fe4.prepend("WHITESPACE").constData()+10), te13fe4.size()-10 };callbackApproveSignDataCtx721036_SetEndpoint(this, endpointPacked); };
	void Signal_EndpointChanged(QString endpoint) { QByteArray te13fe4 = endpoint.toUtf8(); Moc_PackedString endpointPacked = { const_cast<char*>(te13fe4.prepend("WHITESPACE").constData()+10), te13fe4.size()-10 };callbackApproveSignDataCtx721036_EndpointChanged(this, endpointPacked); };
	QString from() { return ({ Moc_PackedString tempVal = callbackApproveSignDataCtx721036_From(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setFrom(QString from) { QByteArray t0b1e95 = from.toUtf8(); Moc_PackedString fromPacked = { const_cast<char*>(t0b1e95.prepend("WHITESPACE").constData()+10), t0b1e95.size()-10 };callbackApproveSignDataCtx721036_SetFrom(this, fromPacked); };
	void Signal_FromChanged(QString from) { QByteArray t0b1e95 = from.toUtf8(); Moc_PackedString fromPacked = { const_cast<char*>(t0b1e95.prepend("WHITESPACE").constData()+10), t0b1e95.size()-10 };callbackApproveSignDataCtx721036_FromChanged(this, fromPacked); };
	QString message() { return ({ Moc_PackedString tempVal = callbackApproveSignDataCtx721036_Message(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setMessage(QString message) { QByteArray t6f9b9a = message.toUtf8(); Moc_PackedString messagePacked = { const_cast<char*>(t6f9b9a.prepend("WHITESPACE").constData()+10), t6f9b9a.size()-10 };callbackApproveSignDataCtx721036_SetMessage(this, messagePacked); };
	void Signal_MessageChanged(QString message) { QByteArray t6f9b9a = message.toUtf8(); Moc_PackedString messagePacked = { const_cast<char*>(t6f9b9a.prepend("WHITESPACE").constData()+10), t6f9b9a.size()-10 };callbackApproveSignDataCtx721036_MessageChanged(this, messagePacked); };
	QString rawData() { return ({ Moc_PackedString tempVal = callbackApproveSignDataCtx721036_RawData(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setRawData(QString rawData) { QByteArray tcacc10 = rawData.toUtf8(); Moc_PackedString rawDataPacked = { const_cast<char*>(tcacc10.prepend("WHITESPACE").constData()+10), tcacc10.size()-10 };callbackApproveSignDataCtx721036_SetRawData(this, rawDataPacked); };
	void Signal_RawDataChanged(QString rawData) { QByteArray tcacc10 = rawData.toUtf8(); Moc_PackedString rawDataPacked = { const_cast<char*>(tcacc10.prepend("WHITESPACE").constData()+10), tcacc10.size()-10 };callbackApproveSignDataCtx721036_RawDataChanged(this, rawDataPacked); };
	QString hash() { return ({ Moc_PackedString tempVal = callbackApproveSignDataCtx721036_Hash(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void setHash(QString hash) { QByteArray t2346ad = hash.toUtf8(); Moc_PackedString hashPacked = { const_cast<char*>(t2346ad.prepend("WHITESPACE").constData()+10), t2346ad.size()-10 };callbackApproveSignDataCtx721036_SetHash(this, hashPacked); };
	void Signal_HashChanged(QString hash) { QByteArray t2346ad = hash.toUtf8(); Moc_PackedString hashPacked = { const_cast<char*>(t2346ad.prepend("WHITESPACE").constData()+10), t2346ad.size()-10 };callbackApproveSignDataCtx721036_HashChanged(this, hashPacked); };
	 ~ApproveSignDataCtx721036() { callbackApproveSignDataCtx721036_DestroyApproveSignDataCtx(this); };
	bool event(QEvent * e) { return callbackApproveSignDataCtx721036_Event(this, e) != 0; };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackApproveSignDataCtx721036_EventFilter(this, watched, event) != 0; };
	
	void childEvent(QChildEvent * event) { callbackApproveSignDataCtx721036_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackApproveSignDataCtx721036_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackApproveSignDataCtx721036_CustomEvent(this, event); };
	void deleteLater() { callbackApproveSignDataCtx721036_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackApproveSignDataCtx721036_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackApproveSignDataCtx721036_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray taa2c4f = objectName.toUtf8(); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f.prepend("WHITESPACE").constData()+10), taa2c4f.size()-10 };callbackApproveSignDataCtx721036_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackApproveSignDataCtx721036_TimerEvent(this, event); };
	
	QString remoteDefault() { return _remote; };
	void setRemoteDefault(QString p) { if (p != _remote) { _remote = p; remoteChanged(_remote); } };
	QString transportDefault() { return _transport; };
	void setTransportDefault(QString p) { if (p != _transport) { _transport = p; transportChanged(_transport); } };
	QString endpointDefault() { return _endpoint; };
	void setEndpointDefault(QString p) { if (p != _endpoint) { _endpoint = p; endpointChanged(_endpoint); } };
	QString fromDefault() { return _from; };
	void setFromDefault(QString p) { if (p != _from) { _from = p; fromChanged(_from); } };
	QString messageDefault() { return _message; };
	void setMessageDefault(QString p) { if (p != _message) { _message = p; messageChanged(_message); } };
	QString rawDataDefault() { return _rawData; };
	void setRawDataDefault(QString p) { if (p != _rawData) { _rawData = p; rawDataChanged(_rawData); } };
	QString hashDefault() { return _hash; };
	void setHashDefault(QString p) { if (p != _hash) { _hash = p; hashChanged(_hash); } };
signals:
	void clicked(qint32 b);
	void remoteChanged(QString remote);
	void transportChanged(QString transport);
	void endpointChanged(QString endpoint);
	void fromChanged(QString from);
	void messageChanged(QString message);
	void rawDataChanged(QString rawData);
	void hashChanged(QString hash);
public slots:
private:
	QString _remote;
	QString _transport;
	QString _endpoint;
	QString _from;
	QString _message;
	QString _rawData;
	QString _hash;
};

Q_DECLARE_METATYPE(ApproveSignDataCtx721036*)


void ApproveSignDataCtx721036_ApproveSignDataCtx721036_QRegisterMetaTypes() {
	qRegisterMetaType<QString>();
}

struct Moc_PackedString ApproveListingCtx721036_Remote(void* ptr)
{
	return ({ QByteArray t9605d3 = static_cast<ApproveListingCtx721036*>(ptr)->remote().toUtf8(); Moc_PackedString { const_cast<char*>(t9605d3.prepend("WHITESPACE").constData()+10), t9605d3.size()-10 }; });
}

struct Moc_PackedString ApproveListingCtx721036_RemoteDefault(void* ptr)
{
	return ({ QByteArray t4b8f13 = static_cast<ApproveListingCtx721036*>(ptr)->remoteDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t4b8f13.prepend("WHITESPACE").constData()+10), t4b8f13.size()-10 }; });
}

void ApproveListingCtx721036_SetRemote(void* ptr, struct Moc_PackedString remote)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setRemote(QString::fromUtf8(remote.data, remote.len));
}

void ApproveListingCtx721036_SetRemoteDefault(void* ptr, struct Moc_PackedString remote)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setRemoteDefault(QString::fromUtf8(remote.data, remote.len));
}

void ApproveListingCtx721036_ConnectRemoteChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::remoteChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_RemoteChanged));
}

void ApproveListingCtx721036_DisconnectRemoteChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::remoteChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_RemoteChanged));
}

void ApproveListingCtx721036_RemoteChanged(void* ptr, struct Moc_PackedString remote)
{
	static_cast<ApproveListingCtx721036*>(ptr)->remoteChanged(QString::fromUtf8(remote.data, remote.len));
}

struct Moc_PackedString ApproveListingCtx721036_Transport(void* ptr)
{
	return ({ QByteArray t342796 = static_cast<ApproveListingCtx721036*>(ptr)->transport().toUtf8(); Moc_PackedString { const_cast<char*>(t342796.prepend("WHITESPACE").constData()+10), t342796.size()-10 }; });
}

struct Moc_PackedString ApproveListingCtx721036_TransportDefault(void* ptr)
{
	return ({ QByteArray t433cbf = static_cast<ApproveListingCtx721036*>(ptr)->transportDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t433cbf.prepend("WHITESPACE").constData()+10), t433cbf.size()-10 }; });
}

void ApproveListingCtx721036_SetTransport(void* ptr, struct Moc_PackedString transport)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setTransport(QString::fromUtf8(transport.data, transport.len));
}

void ApproveListingCtx721036_SetTransportDefault(void* ptr, struct Moc_PackedString transport)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setTransportDefault(QString::fromUtf8(transport.data, transport.len));
}

void ApproveListingCtx721036_ConnectTransportChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::transportChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_TransportChanged));
}

void ApproveListingCtx721036_DisconnectTransportChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::transportChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_TransportChanged));
}

void ApproveListingCtx721036_TransportChanged(void* ptr, struct Moc_PackedString transport)
{
	static_cast<ApproveListingCtx721036*>(ptr)->transportChanged(QString::fromUtf8(transport.data, transport.len));
}

struct Moc_PackedString ApproveListingCtx721036_Endpoint(void* ptr)
{
	return ({ QByteArray t637b7c = static_cast<ApproveListingCtx721036*>(ptr)->endpoint().toUtf8(); Moc_PackedString { const_cast<char*>(t637b7c.prepend("WHITESPACE").constData()+10), t637b7c.size()-10 }; });
}

struct Moc_PackedString ApproveListingCtx721036_EndpointDefault(void* ptr)
{
	return ({ QByteArray t7e670e = static_cast<ApproveListingCtx721036*>(ptr)->endpointDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t7e670e.prepend("WHITESPACE").constData()+10), t7e670e.size()-10 }; });
}

void ApproveListingCtx721036_SetEndpoint(void* ptr, struct Moc_PackedString endpoint)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setEndpoint(QString::fromUtf8(endpoint.data, endpoint.len));
}

void ApproveListingCtx721036_SetEndpointDefault(void* ptr, struct Moc_PackedString endpoint)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setEndpointDefault(QString::fromUtf8(endpoint.data, endpoint.len));
}

void ApproveListingCtx721036_ConnectEndpointChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::endpointChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_EndpointChanged));
}

void ApproveListingCtx721036_DisconnectEndpointChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::endpointChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_EndpointChanged));
}

void ApproveListingCtx721036_EndpointChanged(void* ptr, struct Moc_PackedString endpoint)
{
	static_cast<ApproveListingCtx721036*>(ptr)->endpointChanged(QString::fromUtf8(endpoint.data, endpoint.len));
}

struct Moc_PackedString ApproveListingCtx721036_From(void* ptr)
{
	return ({ QByteArray t68097f = static_cast<ApproveListingCtx721036*>(ptr)->from().toUtf8(); Moc_PackedString { const_cast<char*>(t68097f.prepend("WHITESPACE").constData()+10), t68097f.size()-10 }; });
}

struct Moc_PackedString ApproveListingCtx721036_FromDefault(void* ptr)
{
	return ({ QByteArray t5c8897 = static_cast<ApproveListingCtx721036*>(ptr)->fromDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t5c8897.prepend("WHITESPACE").constData()+10), t5c8897.size()-10 }; });
}

void ApproveListingCtx721036_SetFrom(void* ptr, struct Moc_PackedString from)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setFrom(QString::fromUtf8(from.data, from.len));
}

void ApproveListingCtx721036_SetFromDefault(void* ptr, struct Moc_PackedString from)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setFromDefault(QString::fromUtf8(from.data, from.len));
}

void ApproveListingCtx721036_ConnectFromChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::fromChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_FromChanged));
}

void ApproveListingCtx721036_DisconnectFromChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::fromChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_FromChanged));
}

void ApproveListingCtx721036_FromChanged(void* ptr, struct Moc_PackedString from)
{
	static_cast<ApproveListingCtx721036*>(ptr)->fromChanged(QString::fromUtf8(from.data, from.len));
}

struct Moc_PackedString ApproveListingCtx721036_Message(void* ptr)
{
	return ({ QByteArray t87291a = static_cast<ApproveListingCtx721036*>(ptr)->message().toUtf8(); Moc_PackedString { const_cast<char*>(t87291a.prepend("WHITESPACE").constData()+10), t87291a.size()-10 }; });
}

struct Moc_PackedString ApproveListingCtx721036_MessageDefault(void* ptr)
{
	return ({ QByteArray t124a6d = static_cast<ApproveListingCtx721036*>(ptr)->messageDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t124a6d.prepend("WHITESPACE").constData()+10), t124a6d.size()-10 }; });
}

void ApproveListingCtx721036_SetMessage(void* ptr, struct Moc_PackedString message)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setMessage(QString::fromUtf8(message.data, message.len));
}

void ApproveListingCtx721036_SetMessageDefault(void* ptr, struct Moc_PackedString message)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setMessageDefault(QString::fromUtf8(message.data, message.len));
}

void ApproveListingCtx721036_ConnectMessageChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::messageChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_MessageChanged));
}

void ApproveListingCtx721036_DisconnectMessageChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::messageChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_MessageChanged));
}

void ApproveListingCtx721036_MessageChanged(void* ptr, struct Moc_PackedString message)
{
	static_cast<ApproveListingCtx721036*>(ptr)->messageChanged(QString::fromUtf8(message.data, message.len));
}

struct Moc_PackedString ApproveListingCtx721036_RawData(void* ptr)
{
	return ({ QByteArray t409f0f = static_cast<ApproveListingCtx721036*>(ptr)->rawData().toUtf8(); Moc_PackedString { const_cast<char*>(t409f0f.prepend("WHITESPACE").constData()+10), t409f0f.size()-10 }; });
}

struct Moc_PackedString ApproveListingCtx721036_RawDataDefault(void* ptr)
{
	return ({ QByteArray t518430 = static_cast<ApproveListingCtx721036*>(ptr)->rawDataDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t518430.prepend("WHITESPACE").constData()+10), t518430.size()-10 }; });
}

void ApproveListingCtx721036_SetRawData(void* ptr, struct Moc_PackedString rawData)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setRawData(QString::fromUtf8(rawData.data, rawData.len));
}

void ApproveListingCtx721036_SetRawDataDefault(void* ptr, struct Moc_PackedString rawData)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setRawDataDefault(QString::fromUtf8(rawData.data, rawData.len));
}

void ApproveListingCtx721036_ConnectRawDataChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::rawDataChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_RawDataChanged));
}

void ApproveListingCtx721036_DisconnectRawDataChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::rawDataChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_RawDataChanged));
}

void ApproveListingCtx721036_RawDataChanged(void* ptr, struct Moc_PackedString rawData)
{
	static_cast<ApproveListingCtx721036*>(ptr)->rawDataChanged(QString::fromUtf8(rawData.data, rawData.len));
}

struct Moc_PackedString ApproveListingCtx721036_Hash(void* ptr)
{
	return ({ QByteArray t74e19d = static_cast<ApproveListingCtx721036*>(ptr)->hash().toUtf8(); Moc_PackedString { const_cast<char*>(t74e19d.prepend("WHITESPACE").constData()+10), t74e19d.size()-10 }; });
}

struct Moc_PackedString ApproveListingCtx721036_HashDefault(void* ptr)
{
	return ({ QByteArray td3c517 = static_cast<ApproveListingCtx721036*>(ptr)->hashDefault().toUtf8(); Moc_PackedString { const_cast<char*>(td3c517.prepend("WHITESPACE").constData()+10), td3c517.size()-10 }; });
}

void ApproveListingCtx721036_SetHash(void* ptr, struct Moc_PackedString hash)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setHash(QString::fromUtf8(hash.data, hash.len));
}

void ApproveListingCtx721036_SetHashDefault(void* ptr, struct Moc_PackedString hash)
{
	static_cast<ApproveListingCtx721036*>(ptr)->setHashDefault(QString::fromUtf8(hash.data, hash.len));
}

void ApproveListingCtx721036_ConnectHashChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::hashChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_HashChanged));
}

void ApproveListingCtx721036_DisconnectHashChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::hashChanged), static_cast<ApproveListingCtx721036*>(ptr), static_cast<void (ApproveListingCtx721036::*)(QString)>(&ApproveListingCtx721036::Signal_HashChanged));
}

void ApproveListingCtx721036_HashChanged(void* ptr, struct Moc_PackedString hash)
{
	static_cast<ApproveListingCtx721036*>(ptr)->hashChanged(QString::fromUtf8(hash.data, hash.len));
}

int ApproveListingCtx721036_ApproveListingCtx721036_QRegisterMetaType()
{
	return qRegisterMetaType<ApproveListingCtx721036*>();
}

int ApproveListingCtx721036_ApproveListingCtx721036_QRegisterMetaType2(char* typeName)
{
	return qRegisterMetaType<ApproveListingCtx721036*>(const_cast<const char*>(typeName));
}

int ApproveListingCtx721036_ApproveListingCtx721036_QmlRegisterType()
{
#ifdef QT_QML_LIB
	return qmlRegisterType<ApproveListingCtx721036>();
#else
	return 0;
#endif
}

int ApproveListingCtx721036_ApproveListingCtx721036_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName)
{
#ifdef QT_QML_LIB
	return qmlRegisterType<ApproveListingCtx721036>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName));
#else
	return 0;
#endif
}

void* ApproveListingCtx721036___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void ApproveListingCtx721036___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* ApproveListingCtx721036___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* ApproveListingCtx721036___findChildren_atList2(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveListingCtx721036___findChildren_setList2(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveListingCtx721036___findChildren_newList2(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* ApproveListingCtx721036___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveListingCtx721036___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveListingCtx721036___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* ApproveListingCtx721036___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveListingCtx721036___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveListingCtx721036___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* ApproveListingCtx721036___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveListingCtx721036___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveListingCtx721036___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* ApproveListingCtx721036_NewApproveListingCtx(void* parent)
{
	if (dynamic_cast<QCameraImageCapture*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QCameraImageCapture*>(parent));
	} else if (dynamic_cast<QDBusPendingCallWatcher*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QDBusPendingCallWatcher*>(parent));
	} else if (dynamic_cast<QExtensionFactory*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QExtensionFactory*>(parent));
	} else if (dynamic_cast<QExtensionManager*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QExtensionManager*>(parent));
	} else if (dynamic_cast<QGraphicsObject*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QGraphicsObject*>(parent));
	} else if (dynamic_cast<QGraphicsWidget*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QGraphicsWidget*>(parent));
	} else if (dynamic_cast<QLayout*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QLayout*>(parent));
	} else if (dynamic_cast<QMediaPlaylist*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QMediaPlaylist*>(parent));
	} else if (dynamic_cast<QMediaRecorder*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QMediaRecorder*>(parent));
	} else if (dynamic_cast<QOffscreenSurface*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QOffscreenSurface*>(parent));
	} else if (dynamic_cast<QPaintDeviceWindow*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QPaintDeviceWindow*>(parent));
	} else if (dynamic_cast<QPdfWriter*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QPdfWriter*>(parent));
	} else if (dynamic_cast<QQuickItem*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QQuickItem*>(parent));
	} else if (dynamic_cast<QRadioData*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QRadioData*>(parent));
	} else if (dynamic_cast<QWidget*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QWidget*>(parent));
	} else if (dynamic_cast<QWindow*>(static_cast<QObject*>(parent))) {
		return new ApproveListingCtx721036(static_cast<QWindow*>(parent));
	} else {
		return new ApproveListingCtx721036(static_cast<QObject*>(parent));
	}
}

void ApproveListingCtx721036_DestroyApproveListingCtx(void* ptr)
{
	static_cast<ApproveListingCtx721036*>(ptr)->~ApproveListingCtx721036();
}

void ApproveListingCtx721036_DestroyApproveListingCtxDefault(void* ptr)
{
	Q_UNUSED(ptr);

}

char ApproveListingCtx721036_EventDefault(void* ptr, void* e)
{
	return static_cast<ApproveListingCtx721036*>(ptr)->QObject::event(static_cast<QEvent*>(e));
}

char ApproveListingCtx721036_EventFilterDefault(void* ptr, void* watched, void* event)
{
	return static_cast<ApproveListingCtx721036*>(ptr)->QObject::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}

void ApproveListingCtx721036_ChildEventDefault(void* ptr, void* event)
{
	static_cast<ApproveListingCtx721036*>(ptr)->QObject::childEvent(static_cast<QChildEvent*>(event));
}

void ApproveListingCtx721036_ConnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<ApproveListingCtx721036*>(ptr)->QObject::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void ApproveListingCtx721036_CustomEventDefault(void* ptr, void* event)
{
	static_cast<ApproveListingCtx721036*>(ptr)->QObject::customEvent(static_cast<QEvent*>(event));
}

void ApproveListingCtx721036_DeleteLaterDefault(void* ptr)
{
	static_cast<ApproveListingCtx721036*>(ptr)->QObject::deleteLater();
}

void ApproveListingCtx721036_DisconnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<ApproveListingCtx721036*>(ptr)->QObject::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

void ApproveListingCtx721036_TimerEventDefault(void* ptr, void* event)
{
	static_cast<ApproveListingCtx721036*>(ptr)->QObject::timerEvent(static_cast<QTimerEvent*>(event));
}



void ApproveSignDataCtx721036_ConnectClicked(void* ptr)
{
	QObject::connect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(qint32)>(&ApproveSignDataCtx721036::clicked), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(qint32)>(&ApproveSignDataCtx721036::Signal_Clicked));
}

void ApproveSignDataCtx721036_DisconnectClicked(void* ptr)
{
	QObject::disconnect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(qint32)>(&ApproveSignDataCtx721036::clicked), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(qint32)>(&ApproveSignDataCtx721036::Signal_Clicked));
}

void ApproveSignDataCtx721036_Clicked(void* ptr, int b)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->clicked(b);
}

struct Moc_PackedString ApproveSignDataCtx721036_Remote(void* ptr)
{
	return ({ QByteArray td166de = static_cast<ApproveSignDataCtx721036*>(ptr)->remote().toUtf8(); Moc_PackedString { const_cast<char*>(td166de.prepend("WHITESPACE").constData()+10), td166de.size()-10 }; });
}

struct Moc_PackedString ApproveSignDataCtx721036_RemoteDefault(void* ptr)
{
	return ({ QByteArray t110aa3 = static_cast<ApproveSignDataCtx721036*>(ptr)->remoteDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t110aa3.prepend("WHITESPACE").constData()+10), t110aa3.size()-10 }; });
}

void ApproveSignDataCtx721036_SetRemote(void* ptr, struct Moc_PackedString remote)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setRemote(QString::fromUtf8(remote.data, remote.len));
}

void ApproveSignDataCtx721036_SetRemoteDefault(void* ptr, struct Moc_PackedString remote)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setRemoteDefault(QString::fromUtf8(remote.data, remote.len));
}

void ApproveSignDataCtx721036_ConnectRemoteChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::remoteChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_RemoteChanged));
}

void ApproveSignDataCtx721036_DisconnectRemoteChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::remoteChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_RemoteChanged));
}

void ApproveSignDataCtx721036_RemoteChanged(void* ptr, struct Moc_PackedString remote)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->remoteChanged(QString::fromUtf8(remote.data, remote.len));
}

struct Moc_PackedString ApproveSignDataCtx721036_Transport(void* ptr)
{
	return ({ QByteArray tf8900c = static_cast<ApproveSignDataCtx721036*>(ptr)->transport().toUtf8(); Moc_PackedString { const_cast<char*>(tf8900c.prepend("WHITESPACE").constData()+10), tf8900c.size()-10 }; });
}

struct Moc_PackedString ApproveSignDataCtx721036_TransportDefault(void* ptr)
{
	return ({ QByteArray t04ad21 = static_cast<ApproveSignDataCtx721036*>(ptr)->transportDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t04ad21.prepend("WHITESPACE").constData()+10), t04ad21.size()-10 }; });
}

void ApproveSignDataCtx721036_SetTransport(void* ptr, struct Moc_PackedString transport)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setTransport(QString::fromUtf8(transport.data, transport.len));
}

void ApproveSignDataCtx721036_SetTransportDefault(void* ptr, struct Moc_PackedString transport)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setTransportDefault(QString::fromUtf8(transport.data, transport.len));
}

void ApproveSignDataCtx721036_ConnectTransportChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::transportChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_TransportChanged));
}

void ApproveSignDataCtx721036_DisconnectTransportChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::transportChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_TransportChanged));
}

void ApproveSignDataCtx721036_TransportChanged(void* ptr, struct Moc_PackedString transport)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->transportChanged(QString::fromUtf8(transport.data, transport.len));
}

struct Moc_PackedString ApproveSignDataCtx721036_Endpoint(void* ptr)
{
	return ({ QByteArray tb0291e = static_cast<ApproveSignDataCtx721036*>(ptr)->endpoint().toUtf8(); Moc_PackedString { const_cast<char*>(tb0291e.prepend("WHITESPACE").constData()+10), tb0291e.size()-10 }; });
}

struct Moc_PackedString ApproveSignDataCtx721036_EndpointDefault(void* ptr)
{
	return ({ QByteArray t55e053 = static_cast<ApproveSignDataCtx721036*>(ptr)->endpointDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t55e053.prepend("WHITESPACE").constData()+10), t55e053.size()-10 }; });
}

void ApproveSignDataCtx721036_SetEndpoint(void* ptr, struct Moc_PackedString endpoint)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setEndpoint(QString::fromUtf8(endpoint.data, endpoint.len));
}

void ApproveSignDataCtx721036_SetEndpointDefault(void* ptr, struct Moc_PackedString endpoint)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setEndpointDefault(QString::fromUtf8(endpoint.data, endpoint.len));
}

void ApproveSignDataCtx721036_ConnectEndpointChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::endpointChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_EndpointChanged));
}

void ApproveSignDataCtx721036_DisconnectEndpointChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::endpointChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_EndpointChanged));
}

void ApproveSignDataCtx721036_EndpointChanged(void* ptr, struct Moc_PackedString endpoint)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->endpointChanged(QString::fromUtf8(endpoint.data, endpoint.len));
}

struct Moc_PackedString ApproveSignDataCtx721036_From(void* ptr)
{
	return ({ QByteArray t1ec6d2 = static_cast<ApproveSignDataCtx721036*>(ptr)->from().toUtf8(); Moc_PackedString { const_cast<char*>(t1ec6d2.prepend("WHITESPACE").constData()+10), t1ec6d2.size()-10 }; });
}

struct Moc_PackedString ApproveSignDataCtx721036_FromDefault(void* ptr)
{
	return ({ QByteArray t8143a5 = static_cast<ApproveSignDataCtx721036*>(ptr)->fromDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t8143a5.prepend("WHITESPACE").constData()+10), t8143a5.size()-10 }; });
}

void ApproveSignDataCtx721036_SetFrom(void* ptr, struct Moc_PackedString from)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setFrom(QString::fromUtf8(from.data, from.len));
}

void ApproveSignDataCtx721036_SetFromDefault(void* ptr, struct Moc_PackedString from)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setFromDefault(QString::fromUtf8(from.data, from.len));
}

void ApproveSignDataCtx721036_ConnectFromChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::fromChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_FromChanged));
}

void ApproveSignDataCtx721036_DisconnectFromChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::fromChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_FromChanged));
}

void ApproveSignDataCtx721036_FromChanged(void* ptr, struct Moc_PackedString from)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->fromChanged(QString::fromUtf8(from.data, from.len));
}

struct Moc_PackedString ApproveSignDataCtx721036_Message(void* ptr)
{
	return ({ QByteArray tf8c345 = static_cast<ApproveSignDataCtx721036*>(ptr)->message().toUtf8(); Moc_PackedString { const_cast<char*>(tf8c345.prepend("WHITESPACE").constData()+10), tf8c345.size()-10 }; });
}

struct Moc_PackedString ApproveSignDataCtx721036_MessageDefault(void* ptr)
{
	return ({ QByteArray t59a7b5 = static_cast<ApproveSignDataCtx721036*>(ptr)->messageDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t59a7b5.prepend("WHITESPACE").constData()+10), t59a7b5.size()-10 }; });
}

void ApproveSignDataCtx721036_SetMessage(void* ptr, struct Moc_PackedString message)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setMessage(QString::fromUtf8(message.data, message.len));
}

void ApproveSignDataCtx721036_SetMessageDefault(void* ptr, struct Moc_PackedString message)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setMessageDefault(QString::fromUtf8(message.data, message.len));
}

void ApproveSignDataCtx721036_ConnectMessageChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::messageChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_MessageChanged));
}

void ApproveSignDataCtx721036_DisconnectMessageChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::messageChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_MessageChanged));
}

void ApproveSignDataCtx721036_MessageChanged(void* ptr, struct Moc_PackedString message)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->messageChanged(QString::fromUtf8(message.data, message.len));
}

struct Moc_PackedString ApproveSignDataCtx721036_RawData(void* ptr)
{
	return ({ QByteArray t71547a = static_cast<ApproveSignDataCtx721036*>(ptr)->rawData().toUtf8(); Moc_PackedString { const_cast<char*>(t71547a.prepend("WHITESPACE").constData()+10), t71547a.size()-10 }; });
}

struct Moc_PackedString ApproveSignDataCtx721036_RawDataDefault(void* ptr)
{
	return ({ QByteArray tf54367 = static_cast<ApproveSignDataCtx721036*>(ptr)->rawDataDefault().toUtf8(); Moc_PackedString { const_cast<char*>(tf54367.prepend("WHITESPACE").constData()+10), tf54367.size()-10 }; });
}

void ApproveSignDataCtx721036_SetRawData(void* ptr, struct Moc_PackedString rawData)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setRawData(QString::fromUtf8(rawData.data, rawData.len));
}

void ApproveSignDataCtx721036_SetRawDataDefault(void* ptr, struct Moc_PackedString rawData)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setRawDataDefault(QString::fromUtf8(rawData.data, rawData.len));
}

void ApproveSignDataCtx721036_ConnectRawDataChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::rawDataChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_RawDataChanged));
}

void ApproveSignDataCtx721036_DisconnectRawDataChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::rawDataChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_RawDataChanged));
}

void ApproveSignDataCtx721036_RawDataChanged(void* ptr, struct Moc_PackedString rawData)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->rawDataChanged(QString::fromUtf8(rawData.data, rawData.len));
}

struct Moc_PackedString ApproveSignDataCtx721036_Hash(void* ptr)
{
	return ({ QByteArray tf9f901 = static_cast<ApproveSignDataCtx721036*>(ptr)->hash().toUtf8(); Moc_PackedString { const_cast<char*>(tf9f901.prepend("WHITESPACE").constData()+10), tf9f901.size()-10 }; });
}

struct Moc_PackedString ApproveSignDataCtx721036_HashDefault(void* ptr)
{
	return ({ QByteArray tcc83f5 = static_cast<ApproveSignDataCtx721036*>(ptr)->hashDefault().toUtf8(); Moc_PackedString { const_cast<char*>(tcc83f5.prepend("WHITESPACE").constData()+10), tcc83f5.size()-10 }; });
}

void ApproveSignDataCtx721036_SetHash(void* ptr, struct Moc_PackedString hash)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setHash(QString::fromUtf8(hash.data, hash.len));
}

void ApproveSignDataCtx721036_SetHashDefault(void* ptr, struct Moc_PackedString hash)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->setHashDefault(QString::fromUtf8(hash.data, hash.len));
}

void ApproveSignDataCtx721036_ConnectHashChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::hashChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_HashChanged));
}

void ApproveSignDataCtx721036_DisconnectHashChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::hashChanged), static_cast<ApproveSignDataCtx721036*>(ptr), static_cast<void (ApproveSignDataCtx721036::*)(QString)>(&ApproveSignDataCtx721036::Signal_HashChanged));
}

void ApproveSignDataCtx721036_HashChanged(void* ptr, struct Moc_PackedString hash)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->hashChanged(QString::fromUtf8(hash.data, hash.len));
}

int ApproveSignDataCtx721036_ApproveSignDataCtx721036_QRegisterMetaType()
{
	return qRegisterMetaType<ApproveSignDataCtx721036*>();
}

int ApproveSignDataCtx721036_ApproveSignDataCtx721036_QRegisterMetaType2(char* typeName)
{
	return qRegisterMetaType<ApproveSignDataCtx721036*>(const_cast<const char*>(typeName));
}

int ApproveSignDataCtx721036_ApproveSignDataCtx721036_QmlRegisterType()
{
#ifdef QT_QML_LIB
	return qmlRegisterType<ApproveSignDataCtx721036>();
#else
	return 0;
#endif
}

int ApproveSignDataCtx721036_ApproveSignDataCtx721036_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName)
{
#ifdef QT_QML_LIB
	return qmlRegisterType<ApproveSignDataCtx721036>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName));
#else
	return 0;
#endif
}

void* ApproveSignDataCtx721036___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void ApproveSignDataCtx721036___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* ApproveSignDataCtx721036___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* ApproveSignDataCtx721036___findChildren_atList2(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveSignDataCtx721036___findChildren_setList2(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveSignDataCtx721036___findChildren_newList2(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* ApproveSignDataCtx721036___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveSignDataCtx721036___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveSignDataCtx721036___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* ApproveSignDataCtx721036___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveSignDataCtx721036___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveSignDataCtx721036___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* ApproveSignDataCtx721036___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveSignDataCtx721036___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveSignDataCtx721036___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* ApproveSignDataCtx721036_NewApproveSignDataCtx(void* parent)
{
	if (dynamic_cast<QCameraImageCapture*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QCameraImageCapture*>(parent));
	} else if (dynamic_cast<QDBusPendingCallWatcher*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QDBusPendingCallWatcher*>(parent));
	} else if (dynamic_cast<QExtensionFactory*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QExtensionFactory*>(parent));
	} else if (dynamic_cast<QExtensionManager*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QExtensionManager*>(parent));
	} else if (dynamic_cast<QGraphicsObject*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QGraphicsObject*>(parent));
	} else if (dynamic_cast<QGraphicsWidget*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QGraphicsWidget*>(parent));
	} else if (dynamic_cast<QLayout*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QLayout*>(parent));
	} else if (dynamic_cast<QMediaPlaylist*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QMediaPlaylist*>(parent));
	} else if (dynamic_cast<QMediaRecorder*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QMediaRecorder*>(parent));
	} else if (dynamic_cast<QOffscreenSurface*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QOffscreenSurface*>(parent));
	} else if (dynamic_cast<QPaintDeviceWindow*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QPaintDeviceWindow*>(parent));
	} else if (dynamic_cast<QPdfWriter*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QPdfWriter*>(parent));
	} else if (dynamic_cast<QQuickItem*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QQuickItem*>(parent));
	} else if (dynamic_cast<QRadioData*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QRadioData*>(parent));
	} else if (dynamic_cast<QWidget*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QWidget*>(parent));
	} else if (dynamic_cast<QWindow*>(static_cast<QObject*>(parent))) {
		return new ApproveSignDataCtx721036(static_cast<QWindow*>(parent));
	} else {
		return new ApproveSignDataCtx721036(static_cast<QObject*>(parent));
	}
}

void ApproveSignDataCtx721036_DestroyApproveSignDataCtx(void* ptr)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->~ApproveSignDataCtx721036();
}

void ApproveSignDataCtx721036_DestroyApproveSignDataCtxDefault(void* ptr)
{
	Q_UNUSED(ptr);

}

char ApproveSignDataCtx721036_EventDefault(void* ptr, void* e)
{
	return static_cast<ApproveSignDataCtx721036*>(ptr)->QObject::event(static_cast<QEvent*>(e));
}

char ApproveSignDataCtx721036_EventFilterDefault(void* ptr, void* watched, void* event)
{
	return static_cast<ApproveSignDataCtx721036*>(ptr)->QObject::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}

void ApproveSignDataCtx721036_ChildEventDefault(void* ptr, void* event)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->QObject::childEvent(static_cast<QChildEvent*>(event));
}

void ApproveSignDataCtx721036_ConnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->QObject::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void ApproveSignDataCtx721036_CustomEventDefault(void* ptr, void* event)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->QObject::customEvent(static_cast<QEvent*>(event));
}

void ApproveSignDataCtx721036_DeleteLaterDefault(void* ptr)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->QObject::deleteLater();
}

void ApproveSignDataCtx721036_DisconnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->QObject::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

void ApproveSignDataCtx721036_TimerEventDefault(void* ptr, void* event)
{
	static_cast<ApproveSignDataCtx721036*>(ptr)->QObject::timerEvent(static_cast<QTimerEvent*>(event));
}



void ApproveTxCtx721036_ConnectClicked(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(qint32)>(&ApproveTxCtx721036::clicked), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(qint32)>(&ApproveTxCtx721036::Signal_Clicked));
}

void ApproveTxCtx721036_DisconnectClicked(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(qint32)>(&ApproveTxCtx721036::clicked), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(qint32)>(&ApproveTxCtx721036::Signal_Clicked));
}

void ApproveTxCtx721036_Clicked(void* ptr, int b)
{
	static_cast<ApproveTxCtx721036*>(ptr)->clicked(b);
}

struct Moc_PackedString ApproveTxCtx721036_Remote(void* ptr)
{
	return ({ QByteArray t90f7f1 = static_cast<ApproveTxCtx721036*>(ptr)->remote().toUtf8(); Moc_PackedString { const_cast<char*>(t90f7f1.prepend("WHITESPACE").constData()+10), t90f7f1.size()-10 }; });
}

struct Moc_PackedString ApproveTxCtx721036_RemoteDefault(void* ptr)
{
	return ({ QByteArray t5fca0a = static_cast<ApproveTxCtx721036*>(ptr)->remoteDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t5fca0a.prepend("WHITESPACE").constData()+10), t5fca0a.size()-10 }; });
}

void ApproveTxCtx721036_SetRemote(void* ptr, struct Moc_PackedString remote)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setRemote(QString::fromUtf8(remote.data, remote.len));
}

void ApproveTxCtx721036_SetRemoteDefault(void* ptr, struct Moc_PackedString remote)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setRemoteDefault(QString::fromUtf8(remote.data, remote.len));
}

void ApproveTxCtx721036_ConnectRemoteChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::remoteChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_RemoteChanged));
}

void ApproveTxCtx721036_DisconnectRemoteChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::remoteChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_RemoteChanged));
}

void ApproveTxCtx721036_RemoteChanged(void* ptr, struct Moc_PackedString remote)
{
	static_cast<ApproveTxCtx721036*>(ptr)->remoteChanged(QString::fromUtf8(remote.data, remote.len));
}

struct Moc_PackedString ApproveTxCtx721036_Transport(void* ptr)
{
	return ({ QByteArray te6d44f = static_cast<ApproveTxCtx721036*>(ptr)->transport().toUtf8(); Moc_PackedString { const_cast<char*>(te6d44f.prepend("WHITESPACE").constData()+10), te6d44f.size()-10 }; });
}

struct Moc_PackedString ApproveTxCtx721036_TransportDefault(void* ptr)
{
	return ({ QByteArray t09c1b3 = static_cast<ApproveTxCtx721036*>(ptr)->transportDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t09c1b3.prepend("WHITESPACE").constData()+10), t09c1b3.size()-10 }; });
}

void ApproveTxCtx721036_SetTransport(void* ptr, struct Moc_PackedString transport)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setTransport(QString::fromUtf8(transport.data, transport.len));
}

void ApproveTxCtx721036_SetTransportDefault(void* ptr, struct Moc_PackedString transport)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setTransportDefault(QString::fromUtf8(transport.data, transport.len));
}

void ApproveTxCtx721036_ConnectTransportChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::transportChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_TransportChanged));
}

void ApproveTxCtx721036_DisconnectTransportChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::transportChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_TransportChanged));
}

void ApproveTxCtx721036_TransportChanged(void* ptr, struct Moc_PackedString transport)
{
	static_cast<ApproveTxCtx721036*>(ptr)->transportChanged(QString::fromUtf8(transport.data, transport.len));
}

struct Moc_PackedString ApproveTxCtx721036_Endpoint(void* ptr)
{
	return ({ QByteArray taa8e81 = static_cast<ApproveTxCtx721036*>(ptr)->endpoint().toUtf8(); Moc_PackedString { const_cast<char*>(taa8e81.prepend("WHITESPACE").constData()+10), taa8e81.size()-10 }; });
}

struct Moc_PackedString ApproveTxCtx721036_EndpointDefault(void* ptr)
{
	return ({ QByteArray t2b1328 = static_cast<ApproveTxCtx721036*>(ptr)->endpointDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t2b1328.prepend("WHITESPACE").constData()+10), t2b1328.size()-10 }; });
}

void ApproveTxCtx721036_SetEndpoint(void* ptr, struct Moc_PackedString endpoint)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setEndpoint(QString::fromUtf8(endpoint.data, endpoint.len));
}

void ApproveTxCtx721036_SetEndpointDefault(void* ptr, struct Moc_PackedString endpoint)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setEndpointDefault(QString::fromUtf8(endpoint.data, endpoint.len));
}

void ApproveTxCtx721036_ConnectEndpointChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::endpointChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_EndpointChanged));
}

void ApproveTxCtx721036_DisconnectEndpointChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::endpointChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_EndpointChanged));
}

void ApproveTxCtx721036_EndpointChanged(void* ptr, struct Moc_PackedString endpoint)
{
	static_cast<ApproveTxCtx721036*>(ptr)->endpointChanged(QString::fromUtf8(endpoint.data, endpoint.len));
}

struct Moc_PackedString ApproveTxCtx721036_Data(void* ptr)
{
	return ({ QByteArray t8072b7 = static_cast<ApproveTxCtx721036*>(ptr)->data().toUtf8(); Moc_PackedString { const_cast<char*>(t8072b7.prepend("WHITESPACE").constData()+10), t8072b7.size()-10 }; });
}

struct Moc_PackedString ApproveTxCtx721036_DataDefault(void* ptr)
{
	return ({ QByteArray t04fe35 = static_cast<ApproveTxCtx721036*>(ptr)->dataDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t04fe35.prepend("WHITESPACE").constData()+10), t04fe35.size()-10 }; });
}

void ApproveTxCtx721036_SetData(void* ptr, struct Moc_PackedString data)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setData(QString::fromUtf8(data.data, data.len));
}

void ApproveTxCtx721036_SetDataDefault(void* ptr, struct Moc_PackedString data)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setDataDefault(QString::fromUtf8(data.data, data.len));
}

void ApproveTxCtx721036_ConnectDataChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::dataChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_DataChanged));
}

void ApproveTxCtx721036_DisconnectDataChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::dataChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_DataChanged));
}

void ApproveTxCtx721036_DataChanged(void* ptr, struct Moc_PackedString data)
{
	static_cast<ApproveTxCtx721036*>(ptr)->dataChanged(QString::fromUtf8(data.data, data.len));
}

struct Moc_PackedString ApproveTxCtx721036_From(void* ptr)
{
	return ({ QByteArray tc27f9b = static_cast<ApproveTxCtx721036*>(ptr)->from().toUtf8(); Moc_PackedString { const_cast<char*>(tc27f9b.prepend("WHITESPACE").constData()+10), tc27f9b.size()-10 }; });
}

struct Moc_PackedString ApproveTxCtx721036_FromDefault(void* ptr)
{
	return ({ QByteArray t805f9b = static_cast<ApproveTxCtx721036*>(ptr)->fromDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t805f9b.prepend("WHITESPACE").constData()+10), t805f9b.size()-10 }; });
}

void ApproveTxCtx721036_SetFrom(void* ptr, struct Moc_PackedString from)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setFrom(QString::fromUtf8(from.data, from.len));
}

void ApproveTxCtx721036_SetFromDefault(void* ptr, struct Moc_PackedString from)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setFromDefault(QString::fromUtf8(from.data, from.len));
}

void ApproveTxCtx721036_ConnectFromChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::fromChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_FromChanged));
}

void ApproveTxCtx721036_DisconnectFromChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::fromChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_FromChanged));
}

void ApproveTxCtx721036_FromChanged(void* ptr, struct Moc_PackedString from)
{
	static_cast<ApproveTxCtx721036*>(ptr)->fromChanged(QString::fromUtf8(from.data, from.len));
}

struct Moc_PackedString ApproveTxCtx721036_To(void* ptr)
{
	return ({ QByteArray t6e4b06 = static_cast<ApproveTxCtx721036*>(ptr)->to().toUtf8(); Moc_PackedString { const_cast<char*>(t6e4b06.prepend("WHITESPACE").constData()+10), t6e4b06.size()-10 }; });
}

struct Moc_PackedString ApproveTxCtx721036_ToDefault(void* ptr)
{
	return ({ QByteArray t7ceec8 = static_cast<ApproveTxCtx721036*>(ptr)->toDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t7ceec8.prepend("WHITESPACE").constData()+10), t7ceec8.size()-10 }; });
}

void ApproveTxCtx721036_SetTo(void* ptr, struct Moc_PackedString to)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setTo(QString::fromUtf8(to.data, to.len));
}

void ApproveTxCtx721036_SetToDefault(void* ptr, struct Moc_PackedString to)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setToDefault(QString::fromUtf8(to.data, to.len));
}

void ApproveTxCtx721036_ConnectToChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::toChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_ToChanged));
}

void ApproveTxCtx721036_DisconnectToChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::toChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_ToChanged));
}

void ApproveTxCtx721036_ToChanged(void* ptr, struct Moc_PackedString to)
{
	static_cast<ApproveTxCtx721036*>(ptr)->toChanged(QString::fromUtf8(to.data, to.len));
}

struct Moc_PackedString ApproveTxCtx721036_Gas(void* ptr)
{
	return ({ QByteArray t3b252a = static_cast<ApproveTxCtx721036*>(ptr)->gas().toUtf8(); Moc_PackedString { const_cast<char*>(t3b252a.prepend("WHITESPACE").constData()+10), t3b252a.size()-10 }; });
}

struct Moc_PackedString ApproveTxCtx721036_GasDefault(void* ptr)
{
	return ({ QByteArray tdee409 = static_cast<ApproveTxCtx721036*>(ptr)->gasDefault().toUtf8(); Moc_PackedString { const_cast<char*>(tdee409.prepend("WHITESPACE").constData()+10), tdee409.size()-10 }; });
}

void ApproveTxCtx721036_SetGas(void* ptr, struct Moc_PackedString gas)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setGas(QString::fromUtf8(gas.data, gas.len));
}

void ApproveTxCtx721036_SetGasDefault(void* ptr, struct Moc_PackedString gas)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setGasDefault(QString::fromUtf8(gas.data, gas.len));
}

void ApproveTxCtx721036_ConnectGasChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::gasChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_GasChanged));
}

void ApproveTxCtx721036_DisconnectGasChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::gasChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_GasChanged));
}

void ApproveTxCtx721036_GasChanged(void* ptr, struct Moc_PackedString gas)
{
	static_cast<ApproveTxCtx721036*>(ptr)->gasChanged(QString::fromUtf8(gas.data, gas.len));
}

struct Moc_PackedString ApproveTxCtx721036_GasPrice(void* ptr)
{
	return ({ QByteArray te19d41 = static_cast<ApproveTxCtx721036*>(ptr)->gasPrice().toUtf8(); Moc_PackedString { const_cast<char*>(te19d41.prepend("WHITESPACE").constData()+10), te19d41.size()-10 }; });
}

struct Moc_PackedString ApproveTxCtx721036_GasPriceDefault(void* ptr)
{
	return ({ QByteArray tef8e7f = static_cast<ApproveTxCtx721036*>(ptr)->gasPriceDefault().toUtf8(); Moc_PackedString { const_cast<char*>(tef8e7f.prepend("WHITESPACE").constData()+10), tef8e7f.size()-10 }; });
}

void ApproveTxCtx721036_SetGasPrice(void* ptr, struct Moc_PackedString gasPrice)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setGasPrice(QString::fromUtf8(gasPrice.data, gasPrice.len));
}

void ApproveTxCtx721036_SetGasPriceDefault(void* ptr, struct Moc_PackedString gasPrice)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setGasPriceDefault(QString::fromUtf8(gasPrice.data, gasPrice.len));
}

void ApproveTxCtx721036_ConnectGasPriceChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::gasPriceChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_GasPriceChanged));
}

void ApproveTxCtx721036_DisconnectGasPriceChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::gasPriceChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_GasPriceChanged));
}

void ApproveTxCtx721036_GasPriceChanged(void* ptr, struct Moc_PackedString gasPrice)
{
	static_cast<ApproveTxCtx721036*>(ptr)->gasPriceChanged(QString::fromUtf8(gasPrice.data, gasPrice.len));
}

struct Moc_PackedString ApproveTxCtx721036_Nonce(void* ptr)
{
	return ({ QByteArray t532f58 = static_cast<ApproveTxCtx721036*>(ptr)->nonce().toUtf8(); Moc_PackedString { const_cast<char*>(t532f58.prepend("WHITESPACE").constData()+10), t532f58.size()-10 }; });
}

struct Moc_PackedString ApproveTxCtx721036_NonceDefault(void* ptr)
{
	return ({ QByteArray tf1f93d = static_cast<ApproveTxCtx721036*>(ptr)->nonceDefault().toUtf8(); Moc_PackedString { const_cast<char*>(tf1f93d.prepend("WHITESPACE").constData()+10), tf1f93d.size()-10 }; });
}

void ApproveTxCtx721036_SetNonce(void* ptr, struct Moc_PackedString nonce)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setNonce(QString::fromUtf8(nonce.data, nonce.len));
}

void ApproveTxCtx721036_SetNonceDefault(void* ptr, struct Moc_PackedString nonce)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setNonceDefault(QString::fromUtf8(nonce.data, nonce.len));
}

void ApproveTxCtx721036_ConnectNonceChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::nonceChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_NonceChanged));
}

void ApproveTxCtx721036_DisconnectNonceChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::nonceChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_NonceChanged));
}

void ApproveTxCtx721036_NonceChanged(void* ptr, struct Moc_PackedString nonce)
{
	static_cast<ApproveTxCtx721036*>(ptr)->nonceChanged(QString::fromUtf8(nonce.data, nonce.len));
}

struct Moc_PackedString ApproveTxCtx721036_Value(void* ptr)
{
	return ({ QByteArray te5a3fa = static_cast<ApproveTxCtx721036*>(ptr)->value().toUtf8(); Moc_PackedString { const_cast<char*>(te5a3fa.prepend("WHITESPACE").constData()+10), te5a3fa.size()-10 }; });
}

struct Moc_PackedString ApproveTxCtx721036_ValueDefault(void* ptr)
{
	return ({ QByteArray t9772be = static_cast<ApproveTxCtx721036*>(ptr)->valueDefault().toUtf8(); Moc_PackedString { const_cast<char*>(t9772be.prepend("WHITESPACE").constData()+10), t9772be.size()-10 }; });
}

void ApproveTxCtx721036_SetValue(void* ptr, struct Moc_PackedString value)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setValue(QString::fromUtf8(value.data, value.len));
}

void ApproveTxCtx721036_SetValueDefault(void* ptr, struct Moc_PackedString value)
{
	static_cast<ApproveTxCtx721036*>(ptr)->setValueDefault(QString::fromUtf8(value.data, value.len));
}

void ApproveTxCtx721036_ConnectValueChanged(void* ptr)
{
	QObject::connect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::valueChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_ValueChanged));
}

void ApproveTxCtx721036_DisconnectValueChanged(void* ptr)
{
	QObject::disconnect(static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::valueChanged), static_cast<ApproveTxCtx721036*>(ptr), static_cast<void (ApproveTxCtx721036::*)(QString)>(&ApproveTxCtx721036::Signal_ValueChanged));
}

void ApproveTxCtx721036_ValueChanged(void* ptr, struct Moc_PackedString value)
{
	static_cast<ApproveTxCtx721036*>(ptr)->valueChanged(QString::fromUtf8(value.data, value.len));
}

int ApproveTxCtx721036_ApproveTxCtx721036_QRegisterMetaType()
{
	return qRegisterMetaType<ApproveTxCtx721036*>();
}

int ApproveTxCtx721036_ApproveTxCtx721036_QRegisterMetaType2(char* typeName)
{
	return qRegisterMetaType<ApproveTxCtx721036*>(const_cast<const char*>(typeName));
}

int ApproveTxCtx721036_ApproveTxCtx721036_QmlRegisterType()
{
#ifdef QT_QML_LIB
	return qmlRegisterType<ApproveTxCtx721036>();
#else
	return 0;
#endif
}

int ApproveTxCtx721036_ApproveTxCtx721036_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName)
{
#ifdef QT_QML_LIB
	return qmlRegisterType<ApproveTxCtx721036>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName));
#else
	return 0;
#endif
}

void* ApproveTxCtx721036___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void ApproveTxCtx721036___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* ApproveTxCtx721036___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* ApproveTxCtx721036___findChildren_atList2(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveTxCtx721036___findChildren_setList2(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveTxCtx721036___findChildren_newList2(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* ApproveTxCtx721036___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveTxCtx721036___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveTxCtx721036___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* ApproveTxCtx721036___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveTxCtx721036___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveTxCtx721036___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* ApproveTxCtx721036___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void ApproveTxCtx721036___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* ApproveTxCtx721036___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* ApproveTxCtx721036_NewApproveTxCtx(void* parent)
{
	if (dynamic_cast<QCameraImageCapture*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QCameraImageCapture*>(parent));
	} else if (dynamic_cast<QDBusPendingCallWatcher*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QDBusPendingCallWatcher*>(parent));
	} else if (dynamic_cast<QExtensionFactory*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QExtensionFactory*>(parent));
	} else if (dynamic_cast<QExtensionManager*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QExtensionManager*>(parent));
	} else if (dynamic_cast<QGraphicsObject*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QGraphicsObject*>(parent));
	} else if (dynamic_cast<QGraphicsWidget*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QGraphicsWidget*>(parent));
	} else if (dynamic_cast<QLayout*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QLayout*>(parent));
	} else if (dynamic_cast<QMediaPlaylist*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QMediaPlaylist*>(parent));
	} else if (dynamic_cast<QMediaRecorder*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QMediaRecorder*>(parent));
	} else if (dynamic_cast<QOffscreenSurface*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QOffscreenSurface*>(parent));
	} else if (dynamic_cast<QPaintDeviceWindow*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QPaintDeviceWindow*>(parent));
	} else if (dynamic_cast<QPdfWriter*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QPdfWriter*>(parent));
	} else if (dynamic_cast<QQuickItem*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QQuickItem*>(parent));
	} else if (dynamic_cast<QRadioData*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QRadioData*>(parent));
	} else if (dynamic_cast<QWidget*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QWidget*>(parent));
	} else if (dynamic_cast<QWindow*>(static_cast<QObject*>(parent))) {
		return new ApproveTxCtx721036(static_cast<QWindow*>(parent));
	} else {
		return new ApproveTxCtx721036(static_cast<QObject*>(parent));
	}
}

void ApproveTxCtx721036_DestroyApproveTxCtx(void* ptr)
{
	static_cast<ApproveTxCtx721036*>(ptr)->~ApproveTxCtx721036();
}

void ApproveTxCtx721036_DestroyApproveTxCtxDefault(void* ptr)
{
	Q_UNUSED(ptr);

}

char ApproveTxCtx721036_EventDefault(void* ptr, void* e)
{
	return static_cast<ApproveTxCtx721036*>(ptr)->QObject::event(static_cast<QEvent*>(e));
}

char ApproveTxCtx721036_EventFilterDefault(void* ptr, void* watched, void* event)
{
	return static_cast<ApproveTxCtx721036*>(ptr)->QObject::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}

void ApproveTxCtx721036_ChildEventDefault(void* ptr, void* event)
{
	static_cast<ApproveTxCtx721036*>(ptr)->QObject::childEvent(static_cast<QChildEvent*>(event));
}

void ApproveTxCtx721036_ConnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<ApproveTxCtx721036*>(ptr)->QObject::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void ApproveTxCtx721036_CustomEventDefault(void* ptr, void* event)
{
	static_cast<ApproveTxCtx721036*>(ptr)->QObject::customEvent(static_cast<QEvent*>(event));
}

void ApproveTxCtx721036_DeleteLaterDefault(void* ptr)
{
	static_cast<ApproveTxCtx721036*>(ptr)->QObject::deleteLater();
}

void ApproveTxCtx721036_DisconnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<ApproveTxCtx721036*>(ptr)->QObject::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

void ApproveTxCtx721036_TimerEventDefault(void* ptr, void* event)
{
	static_cast<ApproveTxCtx721036*>(ptr)->QObject::timerEvent(static_cast<QTimerEvent*>(event));
}



void CustomListModel721036_ConnectClear(void* ptr)
{
	QObject::connect(static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)()>(&CustomListModel721036::clear), static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)()>(&CustomListModel721036::Signal_Clear));
}

void CustomListModel721036_DisconnectClear(void* ptr)
{
	QObject::disconnect(static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)()>(&CustomListModel721036::clear), static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)()>(&CustomListModel721036::Signal_Clear));
}

void CustomListModel721036_Clear(void* ptr)
{
	static_cast<CustomListModel721036*>(ptr)->clear();
}

void CustomListModel721036_ConnectAdd(void* ptr)
{
	QObject::connect(static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(quintptr)>(&CustomListModel721036::add), static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(quintptr)>(&CustomListModel721036::Signal_Add));
}

void CustomListModel721036_DisconnectAdd(void* ptr)
{
	QObject::disconnect(static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(quintptr)>(&CustomListModel721036::add), static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(quintptr)>(&CustomListModel721036::Signal_Add));
}

void CustomListModel721036_Add(void* ptr, uintptr_t account)
{
	static_cast<CustomListModel721036*>(ptr)->add(account);
}

void CustomListModel721036_ConnectClicked(void* ptr)
{
	QObject::connect(static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(qint32)>(&CustomListModel721036::clicked), static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(qint32)>(&CustomListModel721036::Signal_Clicked));
}

void CustomListModel721036_DisconnectClicked(void* ptr)
{
	QObject::disconnect(static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(qint32)>(&CustomListModel721036::clicked), static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(qint32)>(&CustomListModel721036::Signal_Clicked));
}

void CustomListModel721036_Clicked(void* ptr, int b)
{
	static_cast<CustomListModel721036*>(ptr)->clicked(b);
}

void CustomListModel721036_ConnectOnCheckStateChanged(void* ptr)
{
	QObject::connect(static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(qint32, bool)>(&CustomListModel721036::onCheckStateChanged), static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(qint32, bool)>(&CustomListModel721036::Signal_OnCheckStateChanged));
}

void CustomListModel721036_DisconnectOnCheckStateChanged(void* ptr)
{
	QObject::disconnect(static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(qint32, bool)>(&CustomListModel721036::onCheckStateChanged), static_cast<CustomListModel721036*>(ptr), static_cast<void (CustomListModel721036::*)(qint32, bool)>(&CustomListModel721036::Signal_OnCheckStateChanged));
}

void CustomListModel721036_OnCheckStateChanged(void* ptr, int i, char checked)
{
	static_cast<CustomListModel721036*>(ptr)->onCheckStateChanged(i, checked != 0);
}

int CustomListModel721036_CustomListModel721036_QRegisterMetaType()
{
	return qRegisterMetaType<CustomListModel721036*>();
}

int CustomListModel721036_CustomListModel721036_QRegisterMetaType2(char* typeName)
{
	return qRegisterMetaType<CustomListModel721036*>(const_cast<const char*>(typeName));
}

int CustomListModel721036_CustomListModel721036_QmlRegisterType()
{
#ifdef QT_QML_LIB
	return qmlRegisterType<CustomListModel721036>();
#else
	return 0;
#endif
}

int CustomListModel721036_CustomListModel721036_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName)
{
#ifdef QT_QML_LIB
	return qmlRegisterType<CustomListModel721036>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName));
#else
	return 0;
#endif
}

int CustomListModel721036_____setItemData_roles_keyList_atList(void* ptr, int i)
{
	return ({int tmp = static_cast<QList<int>*>(ptr)->at(i); if (i == static_cast<QList<int>*>(ptr)->size()-1) { static_cast<QList<int>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void CustomListModel721036_____setItemData_roles_keyList_setList(void* ptr, int i)
{
	static_cast<QList<int>*>(ptr)->append(i);
}

void* CustomListModel721036_____setItemData_roles_keyList_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<int>();
}

int CustomListModel721036_____roleNames_keyList_atList(void* ptr, int i)
{
	return ({int tmp = static_cast<QList<int>*>(ptr)->at(i); if (i == static_cast<QList<int>*>(ptr)->size()-1) { static_cast<QList<int>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void CustomListModel721036_____roleNames_keyList_setList(void* ptr, int i)
{
	static_cast<QList<int>*>(ptr)->append(i);
}

void* CustomListModel721036_____roleNames_keyList_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<int>();
}

int CustomListModel721036_____itemData_keyList_atList(void* ptr, int i)
{
	return ({int tmp = static_cast<QList<int>*>(ptr)->at(i); if (i == static_cast<QList<int>*>(ptr)->size()-1) { static_cast<QList<int>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void CustomListModel721036_____itemData_keyList_setList(void* ptr, int i)
{
	static_cast<QList<int>*>(ptr)->append(i);
}

void* CustomListModel721036_____itemData_keyList_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<int>();
}

void* CustomListModel721036___setItemData_roles_atList(void* ptr, int v, int i)
{
	return new QVariant(({ QVariant tmp = static_cast<QMap<int, QVariant>*>(ptr)->value(v); if (i == static_cast<QMap<int, QVariant>*>(ptr)->size()-1) { static_cast<QMap<int, QVariant>*>(ptr)->~QMap(); free(ptr); }; tmp; }));
}

void CustomListModel721036___setItemData_roles_setList(void* ptr, int key, void* i)
{
	static_cast<QMap<int, QVariant>*>(ptr)->insert(key, *static_cast<QVariant*>(i));
}

void* CustomListModel721036___setItemData_roles_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QMap<int, QVariant>();
}

struct Moc_PackedList CustomListModel721036___setItemData_roles_keyList(void* ptr)
{
	return ({ QList<int>* tmpValue = new QList<int>(static_cast<QMap<int, QVariant>*>(ptr)->keys()); Moc_PackedList { tmpValue, tmpValue->size() }; });
}

void* CustomListModel721036___changePersistentIndexList_from_atList(void* ptr, int i)
{
	return new QModelIndex(({QModelIndex tmp = static_cast<QList<QModelIndex>*>(ptr)->at(i); if (i == static_cast<QList<QModelIndex>*>(ptr)->size()-1) { static_cast<QList<QModelIndex>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void CustomListModel721036___changePersistentIndexList_from_setList(void* ptr, void* i)
{
	static_cast<QList<QModelIndex>*>(ptr)->append(*static_cast<QModelIndex*>(i));
}

void* CustomListModel721036___changePersistentIndexList_from_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QModelIndex>();
}

void* CustomListModel721036___changePersistentIndexList_to_atList(void* ptr, int i)
{
	return new QModelIndex(({QModelIndex tmp = static_cast<QList<QModelIndex>*>(ptr)->at(i); if (i == static_cast<QList<QModelIndex>*>(ptr)->size()-1) { static_cast<QList<QModelIndex>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void CustomListModel721036___changePersistentIndexList_to_setList(void* ptr, void* i)
{
	static_cast<QList<QModelIndex>*>(ptr)->append(*static_cast<QModelIndex*>(i));
}

void* CustomListModel721036___changePersistentIndexList_to_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QModelIndex>();
}

int CustomListModel721036___dataChanged_roles_atList(void* ptr, int i)
{
	return ({int tmp = static_cast<QVector<int>*>(ptr)->at(i); if (i == static_cast<QVector<int>*>(ptr)->size()-1) { static_cast<QVector<int>*>(ptr)->~QVector(); free(ptr); }; tmp; });
}

void CustomListModel721036___dataChanged_roles_setList(void* ptr, int i)
{
	static_cast<QVector<int>*>(ptr)->append(i);
}

void* CustomListModel721036___dataChanged_roles_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QVector<int>();
}

void* CustomListModel721036___layoutAboutToBeChanged_parents_atList(void* ptr, int i)
{
	return new QPersistentModelIndex(({QPersistentModelIndex tmp = static_cast<QList<QPersistentModelIndex>*>(ptr)->at(i); if (i == static_cast<QList<QPersistentModelIndex>*>(ptr)->size()-1) { static_cast<QList<QPersistentModelIndex>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void CustomListModel721036___layoutAboutToBeChanged_parents_setList(void* ptr, void* i)
{
	static_cast<QList<QPersistentModelIndex>*>(ptr)->append(*static_cast<QPersistentModelIndex*>(i));
}

void* CustomListModel721036___layoutAboutToBeChanged_parents_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QPersistentModelIndex>();
}

void* CustomListModel721036___layoutChanged_parents_atList(void* ptr, int i)
{
	return new QPersistentModelIndex(({QPersistentModelIndex tmp = static_cast<QList<QPersistentModelIndex>*>(ptr)->at(i); if (i == static_cast<QList<QPersistentModelIndex>*>(ptr)->size()-1) { static_cast<QList<QPersistentModelIndex>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void CustomListModel721036___layoutChanged_parents_setList(void* ptr, void* i)
{
	static_cast<QList<QPersistentModelIndex>*>(ptr)->append(*static_cast<QPersistentModelIndex*>(i));
}

void* CustomListModel721036___layoutChanged_parents_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QPersistentModelIndex>();
}

void* CustomListModel721036___roleNames_atList(void* ptr, int v, int i)
{
	return new QByteArray(({ QByteArray tmp = static_cast<QHash<int, QByteArray>*>(ptr)->value(v); if (i == static_cast<QHash<int, QByteArray>*>(ptr)->size()-1) { static_cast<QHash<int, QByteArray>*>(ptr)->~QHash(); free(ptr); }; tmp; }));
}

void CustomListModel721036___roleNames_setList(void* ptr, int key, void* i)
{
	static_cast<QHash<int, QByteArray>*>(ptr)->insert(key, *static_cast<QByteArray*>(i));
}

void* CustomListModel721036___roleNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QHash<int, QByteArray>();
}

struct Moc_PackedList CustomListModel721036___roleNames_keyList(void* ptr)
{
	return ({ QList<int>* tmpValue = new QList<int>(static_cast<QHash<int, QByteArray>*>(ptr)->keys()); Moc_PackedList { tmpValue, tmpValue->size() }; });
}

void* CustomListModel721036___itemData_atList(void* ptr, int v, int i)
{
	return new QVariant(({ QVariant tmp = static_cast<QMap<int, QVariant>*>(ptr)->value(v); if (i == static_cast<QMap<int, QVariant>*>(ptr)->size()-1) { static_cast<QMap<int, QVariant>*>(ptr)->~QMap(); free(ptr); }; tmp; }));
}

void CustomListModel721036___itemData_setList(void* ptr, int key, void* i)
{
	static_cast<QMap<int, QVariant>*>(ptr)->insert(key, *static_cast<QVariant*>(i));
}

void* CustomListModel721036___itemData_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QMap<int, QVariant>();
}

struct Moc_PackedList CustomListModel721036___itemData_keyList(void* ptr)
{
	return ({ QList<int>* tmpValue = new QList<int>(static_cast<QMap<int, QVariant>*>(ptr)->keys()); Moc_PackedList { tmpValue, tmpValue->size() }; });
}

void* CustomListModel721036___mimeData_indexes_atList(void* ptr, int i)
{
	return new QModelIndex(({QModelIndex tmp = static_cast<QList<QModelIndex>*>(ptr)->at(i); if (i == static_cast<QList<QModelIndex>*>(ptr)->size()-1) { static_cast<QList<QModelIndex>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void CustomListModel721036___mimeData_indexes_setList(void* ptr, void* i)
{
	static_cast<QList<QModelIndex>*>(ptr)->append(*static_cast<QModelIndex*>(i));
}

void* CustomListModel721036___mimeData_indexes_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QModelIndex>();
}

void* CustomListModel721036___match_atList(void* ptr, int i)
{
	return new QModelIndex(({QModelIndex tmp = static_cast<QList<QModelIndex>*>(ptr)->at(i); if (i == static_cast<QList<QModelIndex>*>(ptr)->size()-1) { static_cast<QList<QModelIndex>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void CustomListModel721036___match_setList(void* ptr, void* i)
{
	static_cast<QList<QModelIndex>*>(ptr)->append(*static_cast<QModelIndex*>(i));
}

void* CustomListModel721036___match_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QModelIndex>();
}

void* CustomListModel721036___persistentIndexList_atList(void* ptr, int i)
{
	return new QModelIndex(({QModelIndex tmp = static_cast<QList<QModelIndex>*>(ptr)->at(i); if (i == static_cast<QList<QModelIndex>*>(ptr)->size()-1) { static_cast<QList<QModelIndex>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void CustomListModel721036___persistentIndexList_setList(void* ptr, void* i)
{
	static_cast<QList<QModelIndex>*>(ptr)->append(*static_cast<QModelIndex*>(i));
}

void* CustomListModel721036___persistentIndexList_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QModelIndex>();
}

int CustomListModel721036_____doSetRoleNames_roleNames_keyList_atList(void* ptr, int i)
{
	return ({int tmp = static_cast<QList<int>*>(ptr)->at(i); if (i == static_cast<QList<int>*>(ptr)->size()-1) { static_cast<QList<int>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void CustomListModel721036_____doSetRoleNames_roleNames_keyList_setList(void* ptr, int i)
{
	static_cast<QList<int>*>(ptr)->append(i);
}

void* CustomListModel721036_____doSetRoleNames_roleNames_keyList_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<int>();
}

int CustomListModel721036_____setRoleNames_roleNames_keyList_atList(void* ptr, int i)
{
	return ({int tmp = static_cast<QList<int>*>(ptr)->at(i); if (i == static_cast<QList<int>*>(ptr)->size()-1) { static_cast<QList<int>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void CustomListModel721036_____setRoleNames_roleNames_keyList_setList(void* ptr, int i)
{
	static_cast<QList<int>*>(ptr)->append(i);
}

void* CustomListModel721036_____setRoleNames_roleNames_keyList_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<int>();
}

void* CustomListModel721036___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void CustomListModel721036___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* CustomListModel721036___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* CustomListModel721036___findChildren_atList2(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void CustomListModel721036___findChildren_setList2(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* CustomListModel721036___findChildren_newList2(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* CustomListModel721036___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void CustomListModel721036___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* CustomListModel721036___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* CustomListModel721036___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void CustomListModel721036___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* CustomListModel721036___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* CustomListModel721036___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void CustomListModel721036___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* CustomListModel721036___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* CustomListModel721036_NewCustomListModel(void* parent)
{
	if (dynamic_cast<QCameraImageCapture*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QCameraImageCapture*>(parent));
	} else if (dynamic_cast<QDBusPendingCallWatcher*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QDBusPendingCallWatcher*>(parent));
	} else if (dynamic_cast<QExtensionFactory*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QExtensionFactory*>(parent));
	} else if (dynamic_cast<QExtensionManager*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QExtensionManager*>(parent));
	} else if (dynamic_cast<QGraphicsObject*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QGraphicsObject*>(parent));
	} else if (dynamic_cast<QGraphicsWidget*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QGraphicsWidget*>(parent));
	} else if (dynamic_cast<QLayout*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QLayout*>(parent));
	} else if (dynamic_cast<QMediaPlaylist*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QMediaPlaylist*>(parent));
	} else if (dynamic_cast<QMediaRecorder*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QMediaRecorder*>(parent));
	} else if (dynamic_cast<QOffscreenSurface*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QOffscreenSurface*>(parent));
	} else if (dynamic_cast<QPaintDeviceWindow*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QPaintDeviceWindow*>(parent));
	} else if (dynamic_cast<QPdfWriter*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QPdfWriter*>(parent));
	} else if (dynamic_cast<QQuickItem*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QQuickItem*>(parent));
	} else if (dynamic_cast<QRadioData*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QRadioData*>(parent));
	} else if (dynamic_cast<QWidget*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QWidget*>(parent));
	} else if (dynamic_cast<QWindow*>(static_cast<QObject*>(parent))) {
		return new CustomListModel721036(static_cast<QWindow*>(parent));
	} else {
		return new CustomListModel721036(static_cast<QObject*>(parent));
	}
}

void CustomListModel721036_DestroyCustomListModel(void* ptr)
{
	static_cast<CustomListModel721036*>(ptr)->~CustomListModel721036();
}

void CustomListModel721036_DestroyCustomListModelDefault(void* ptr)
{
	Q_UNUSED(ptr);

}

char CustomListModel721036_DropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::dropMimeData(static_cast<QMimeData*>(data), static_cast<Qt::DropAction>(action), row, column, *static_cast<QModelIndex*>(parent));
}

void* CustomListModel721036_IndexDefault(void* ptr, int row, int column, void* parent)
{
	return new QModelIndex(static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::index(row, column, *static_cast<QModelIndex*>(parent)));
}

void* CustomListModel721036_SiblingDefault(void* ptr, int row, int column, void* idx)
{
	return new QModelIndex(static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::sibling(row, column, *static_cast<QModelIndex*>(idx)));
}

long long CustomListModel721036_FlagsDefault(void* ptr, void* index)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::flags(*static_cast<QModelIndex*>(index));
}



char CustomListModel721036_InsertColumnsDefault(void* ptr, int column, int count, void* parent)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::insertColumns(column, count, *static_cast<QModelIndex*>(parent));
}

char CustomListModel721036_InsertRowsDefault(void* ptr, int row, int count, void* parent)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::insertRows(row, count, *static_cast<QModelIndex*>(parent));
}

char CustomListModel721036_MoveColumnsDefault(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::moveColumns(*static_cast<QModelIndex*>(sourceParent), sourceColumn, count, *static_cast<QModelIndex*>(destinationParent), destinationChild);
}

char CustomListModel721036_MoveRowsDefault(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::moveRows(*static_cast<QModelIndex*>(sourceParent), sourceRow, count, *static_cast<QModelIndex*>(destinationParent), destinationChild);
}

char CustomListModel721036_RemoveColumnsDefault(void* ptr, int column, int count, void* parent)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::removeColumns(column, count, *static_cast<QModelIndex*>(parent));
}

char CustomListModel721036_RemoveRowsDefault(void* ptr, int row, int count, void* parent)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::removeRows(row, count, *static_cast<QModelIndex*>(parent));
}

char CustomListModel721036_SetDataDefault(void* ptr, void* index, void* value, int role)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::setData(*static_cast<QModelIndex*>(index), *static_cast<QVariant*>(value), role);
}

char CustomListModel721036_SetHeaderDataDefault(void* ptr, int section, long long orientation, void* value, int role)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::setHeaderData(section, static_cast<Qt::Orientation>(orientation), *static_cast<QVariant*>(value), role);
}

char CustomListModel721036_SetItemDataDefault(void* ptr, void* index, void* roles)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::setItemData(*static_cast<QModelIndex*>(index), *static_cast<QMap<int, QVariant>*>(roles));
}

char CustomListModel721036_SubmitDefault(void* ptr)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::submit();
}

void CustomListModel721036_FetchMoreDefault(void* ptr, void* parent)
{
	static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::fetchMore(*static_cast<QModelIndex*>(parent));
}

void CustomListModel721036_ResetInternalDataDefault(void* ptr)
{
	static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::resetInternalData();
}

void CustomListModel721036_RevertDefault(void* ptr)
{
	static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::revert();
}

void CustomListModel721036_SortDefault(void* ptr, int column, long long order)
{
	static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::sort(column, static_cast<Qt::SortOrder>(order));
}

struct Moc_PackedList CustomListModel721036_RoleNamesDefault(void* ptr)
{
	return ({ QHash<int, QByteArray>* tmpValue = new QHash<int, QByteArray>(static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::roleNames()); Moc_PackedList { tmpValue, tmpValue->size() }; });
}

struct Moc_PackedList CustomListModel721036_ItemDataDefault(void* ptr, void* index)
{
	return ({ QMap<int, QVariant>* tmpValue = new QMap<int, QVariant>(static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::itemData(*static_cast<QModelIndex*>(index))); Moc_PackedList { tmpValue, tmpValue->size() }; });
}

void* CustomListModel721036_MimeDataDefault(void* ptr, void* indexes)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::mimeData(({ QList<QModelIndex>* tmpP = static_cast<QList<QModelIndex>*>(indexes); QList<QModelIndex> tmpV = *tmpP; tmpP->~QList(); free(tmpP); tmpV; }));
}

void* CustomListModel721036_BuddyDefault(void* ptr, void* index)
{
	return new QModelIndex(static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::buddy(*static_cast<QModelIndex*>(index)));
}

void* CustomListModel721036_ParentDefault(void* ptr, void* index)
{
	return new QModelIndex(static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::parent(*static_cast<QModelIndex*>(index)));
}

struct Moc_PackedList CustomListModel721036_MatchDefault(void* ptr, void* start, int role, void* value, int hits, long long flags)
{
	return ({ QList<QModelIndex>* tmpValue = new QList<QModelIndex>(static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::match(*static_cast<QModelIndex*>(start), role, *static_cast<QVariant*>(value), hits, static_cast<Qt::MatchFlag>(flags))); Moc_PackedList { tmpValue, tmpValue->size() }; });
}

void* CustomListModel721036_SpanDefault(void* ptr, void* index)
{
	return ({ QSize tmpValue = static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::span(*static_cast<QModelIndex*>(index)); new QSize(tmpValue.width(), tmpValue.height()); });
}

struct Moc_PackedString CustomListModel721036_MimeTypesDefault(void* ptr)
{
	return ({ QByteArray t9c6749 = static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::mimeTypes().join("|").toUtf8(); Moc_PackedString { const_cast<char*>(t9c6749.prepend("WHITESPACE").constData()+10), t9c6749.size()-10 }; });
}

void* CustomListModel721036_DataDefault(void* ptr, void* index, int role)
{
	Q_UNUSED(ptr);
	Q_UNUSED(index);
	Q_UNUSED(role);

}

void* CustomListModel721036_HeaderDataDefault(void* ptr, int section, long long orientation, int role)
{
	return new QVariant(static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::headerData(section, static_cast<Qt::Orientation>(orientation), role));
}

long long CustomListModel721036_SupportedDragActionsDefault(void* ptr)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::supportedDragActions();
}

long long CustomListModel721036_SupportedDropActionsDefault(void* ptr)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::supportedDropActions();
}

char CustomListModel721036_CanDropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::canDropMimeData(static_cast<QMimeData*>(data), static_cast<Qt::DropAction>(action), row, column, *static_cast<QModelIndex*>(parent));
}

char CustomListModel721036_CanFetchMoreDefault(void* ptr, void* parent)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::canFetchMore(*static_cast<QModelIndex*>(parent));
}

char CustomListModel721036_HasChildrenDefault(void* ptr, void* parent)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::hasChildren(*static_cast<QModelIndex*>(parent));
}

int CustomListModel721036_ColumnCountDefault(void* ptr, void* parent)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::columnCount(*static_cast<QModelIndex*>(parent));
}

int CustomListModel721036_RowCountDefault(void* ptr, void* parent)
{
	Q_UNUSED(ptr);
	Q_UNUSED(parent);

}

char CustomListModel721036_EventDefault(void* ptr, void* e)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::event(static_cast<QEvent*>(e));
}

char CustomListModel721036_EventFilterDefault(void* ptr, void* watched, void* event)
{
	return static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}

void CustomListModel721036_ChildEventDefault(void* ptr, void* event)
{
	static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::childEvent(static_cast<QChildEvent*>(event));
}

void CustomListModel721036_ConnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void CustomListModel721036_CustomEventDefault(void* ptr, void* event)
{
	static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::customEvent(static_cast<QEvent*>(event));
}

void CustomListModel721036_DeleteLaterDefault(void* ptr)
{
	static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::deleteLater();
}

void CustomListModel721036_DisconnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

void CustomListModel721036_TimerEventDefault(void* ptr, void* event)
{
	static_cast<CustomListModel721036*>(ptr)->QAbstractListModel::timerEvent(static_cast<QTimerEvent*>(event));
}

#include "moc_moc.h"