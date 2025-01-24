// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TEST64BIT_H_
#define FLATBUFFERS_GENERATED_TEST64BIT_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 25 &&
              FLATBUFFERS_VERSION_MINOR == 1 &&
              FLATBUFFERS_VERSION_REVISION == 21,
             "Non-compatible flatbuffers version included");

// For access to the binary schema that produced this file.
#include "test_64bit_bfbs_generated.h"

struct LeafStruct;

struct WrapperTable;
struct WrapperTableBuilder;
struct WrapperTableT;

struct RootTable;
struct RootTableBuilder;
struct RootTableT;

bool operator==(const LeafStruct &lhs, const LeafStruct &rhs);
bool operator!=(const LeafStruct &lhs, const LeafStruct &rhs);
bool operator==(const WrapperTableT &lhs, const WrapperTableT &rhs);
bool operator!=(const WrapperTableT &lhs, const WrapperTableT &rhs);
bool operator==(const RootTableT &lhs, const RootTableT &rhs);
bool operator!=(const RootTableT &lhs, const RootTableT &rhs);

inline const ::flatbuffers::TypeTable *LeafStructTypeTable();

inline const ::flatbuffers::TypeTable *WrapperTableTypeTable();

inline const ::flatbuffers::TypeTable *RootTableTypeTable();

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) LeafStruct FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t a_;
  int32_t padding0__;
  double b_;

 public:
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return LeafStructTypeTable();
  }
  LeafStruct()
      : a_(0),
        padding0__(0),
        b_(0) {
    (void)padding0__;
  }
  LeafStruct(int32_t _a, double _b)
      : a_(::flatbuffers::EndianScalar(_a)),
        padding0__(0),
        b_(::flatbuffers::EndianScalar(_b)) {
    (void)padding0__;
  }
  int32_t a() const {
    return ::flatbuffers::EndianScalar(a_);
  }
  void mutate_a(int32_t _a) {
    ::flatbuffers::WriteScalar(&a_, _a);
  }
  double b() const {
    return ::flatbuffers::EndianScalar(b_);
  }
  void mutate_b(double _b) {
    ::flatbuffers::WriteScalar(&b_, _b);
  }
};
FLATBUFFERS_STRUCT_END(LeafStruct, 16);

inline bool operator==(const LeafStruct &lhs, const LeafStruct &rhs) {
  return
      (lhs.a() == rhs.a()) &&
      (lhs.b() == rhs.b());
}

inline bool operator!=(const LeafStruct &lhs, const LeafStruct &rhs) {
    return !(lhs == rhs);
}


struct WrapperTableT : public ::flatbuffers::NativeTable {
  typedef WrapperTable TableType;
  std::vector<int8_t> vector{};
};

struct WrapperTable FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef WrapperTableT NativeTableType;
  typedef WrapperTableBuilder Builder;
  typedef RootTableBinarySchema BinarySchema;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return WrapperTableTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_VECTOR = 4
  };
  const ::flatbuffers::Vector<int8_t> *vector() const {
    return GetPointer64<const ::flatbuffers::Vector<int8_t> *>(VT_VECTOR);
  }
  ::flatbuffers::Vector<int8_t> *mutable_vector() {
    return GetPointer64<::flatbuffers::Vector<int8_t> *>(VT_VECTOR);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset64(verifier, VT_VECTOR) &&
           verifier.VerifyVector(vector()) &&
           verifier.EndTable();
  }
  WrapperTableT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(WrapperTableT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<WrapperTable> Pack(::flatbuffers::FlatBufferBuilder64 &_fbb, const WrapperTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct WrapperTableBuilder {
  typedef WrapperTable Table;
  ::flatbuffers::FlatBufferBuilder64 &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_vector(::flatbuffers::Offset64<::flatbuffers::Vector<int8_t>> vector) {
    fbb_.AddOffset(WrapperTable::VT_VECTOR, vector);
  }
  explicit WrapperTableBuilder(::flatbuffers::FlatBufferBuilder64 &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<WrapperTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<WrapperTable>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<WrapperTable> CreateWrapperTable(
    ::flatbuffers::FlatBufferBuilder64 &_fbb,
    ::flatbuffers::Offset64<::flatbuffers::Vector<int8_t>> vector = 0) {
  WrapperTableBuilder builder_(_fbb);
  builder_.add_vector(vector);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<WrapperTable> CreateWrapperTableDirect(
    ::flatbuffers::FlatBufferBuilder64 &_fbb,
    const std::vector<int8_t> *vector = nullptr) {
  auto vector__ = vector ? _fbb.CreateVector64<::flatbuffers::Vector>(*vector) : 0;
  return CreateWrapperTable(
      _fbb,
      vector__);
}

::flatbuffers::Offset<WrapperTable> CreateWrapperTable(::flatbuffers::FlatBufferBuilder64 &_fbb, const WrapperTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct RootTableT : public ::flatbuffers::NativeTable {
  typedef RootTable TableType;
  std::vector<uint8_t> far_vector{};
  int32_t a = 0;
  std::string far_string{};
  std::vector<uint8_t> big_vector{};
  std::string near_string{};
  std::vector<uint8_t> nested_root{};
  std::vector<LeafStruct> far_struct_vector{};
  std::vector<LeafStruct> big_struct_vector{};
  std::vector<std::unique_ptr<WrapperTableT>> many_vectors{};
  std::vector<uint8_t> forced_aligned_vector{};
  RootTableT() = default;
  RootTableT(const RootTableT &o);
  RootTableT(RootTableT&&) FLATBUFFERS_NOEXCEPT = default;
  RootTableT &operator=(RootTableT o) FLATBUFFERS_NOEXCEPT;
};

struct RootTable FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef RootTableT NativeTableType;
  typedef RootTableBuilder Builder;
  typedef RootTableBinarySchema BinarySchema;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return RootTableTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FAR_VECTOR = 4,
    VT_A = 6,
    VT_FAR_STRING = 8,
    VT_BIG_VECTOR = 10,
    VT_NEAR_STRING = 12,
    VT_NESTED_ROOT = 14,
    VT_FAR_STRUCT_VECTOR = 16,
    VT_BIG_STRUCT_VECTOR = 18,
    VT_MANY_VECTORS = 20,
    VT_FORCED_ALIGNED_VECTOR = 22
  };
  const ::flatbuffers::Vector<uint8_t> *far_vector() const {
    return GetPointer64<const ::flatbuffers::Vector<uint8_t> *>(VT_FAR_VECTOR);
  }
  ::flatbuffers::Vector<uint8_t> *mutable_far_vector() {
    return GetPointer64<::flatbuffers::Vector<uint8_t> *>(VT_FAR_VECTOR);
  }
  int32_t a() const {
    return GetField<int32_t>(VT_A, 0);
  }
  bool mutate_a(int32_t _a = 0) {
    return SetField<int32_t>(VT_A, _a, 0);
  }
  const ::flatbuffers::String *far_string() const {
    return GetPointer64<const ::flatbuffers::String *>(VT_FAR_STRING);
  }
  ::flatbuffers::String *mutable_far_string() {
    return GetPointer64<::flatbuffers::String *>(VT_FAR_STRING);
  }
  const ::flatbuffers::Vector64<uint8_t> *big_vector() const {
    return GetPointer64<const ::flatbuffers::Vector64<uint8_t> *>(VT_BIG_VECTOR);
  }
  ::flatbuffers::Vector64<uint8_t> *mutable_big_vector() {
    return GetPointer64<::flatbuffers::Vector64<uint8_t> *>(VT_BIG_VECTOR);
  }
  const ::flatbuffers::String *near_string() const {
    return GetPointer<const ::flatbuffers::String *>(VT_NEAR_STRING);
  }
  ::flatbuffers::String *mutable_near_string() {
    return GetPointer<::flatbuffers::String *>(VT_NEAR_STRING);
  }
  const ::flatbuffers::Vector64<uint8_t> *nested_root() const {
    return GetPointer64<const ::flatbuffers::Vector64<uint8_t> *>(VT_NESTED_ROOT);
  }
  ::flatbuffers::Vector64<uint8_t> *mutable_nested_root() {
    return GetPointer64<::flatbuffers::Vector64<uint8_t> *>(VT_NESTED_ROOT);
  }
  const RootTable *nested_root_nested_root() const {
    const auto _f = nested_root();
    return _f ? ::flatbuffers::GetRoot<RootTable>(_f->Data())
              : nullptr;
  }
  const ::flatbuffers::Vector<const LeafStruct *> *far_struct_vector() const {
    return GetPointer64<const ::flatbuffers::Vector<const LeafStruct *> *>(VT_FAR_STRUCT_VECTOR);
  }
  ::flatbuffers::Vector<const LeafStruct *> *mutable_far_struct_vector() {
    return GetPointer64<::flatbuffers::Vector<const LeafStruct *> *>(VT_FAR_STRUCT_VECTOR);
  }
  const ::flatbuffers::Vector64<const LeafStruct *> *big_struct_vector() const {
    return GetPointer64<const ::flatbuffers::Vector64<const LeafStruct *> *>(VT_BIG_STRUCT_VECTOR);
  }
  ::flatbuffers::Vector64<const LeafStruct *> *mutable_big_struct_vector() {
    return GetPointer64<::flatbuffers::Vector64<const LeafStruct *> *>(VT_BIG_STRUCT_VECTOR);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<WrapperTable>> *many_vectors() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<WrapperTable>> *>(VT_MANY_VECTORS);
  }
  ::flatbuffers::Vector<::flatbuffers::Offset<WrapperTable>> *mutable_many_vectors() {
    return GetPointer<::flatbuffers::Vector<::flatbuffers::Offset<WrapperTable>> *>(VT_MANY_VECTORS);
  }
  const ::flatbuffers::Vector64<uint8_t> *forced_aligned_vector() const {
    return GetPointer64<const ::flatbuffers::Vector64<uint8_t> *>(VT_FORCED_ALIGNED_VECTOR);
  }
  ::flatbuffers::Vector64<uint8_t> *mutable_forced_aligned_vector() {
    return GetPointer64<::flatbuffers::Vector64<uint8_t> *>(VT_FORCED_ALIGNED_VECTOR);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset64(verifier, VT_FAR_VECTOR) &&
           verifier.VerifyVector(far_vector()) &&
           VerifyField<int32_t>(verifier, VT_A, 4) &&
           VerifyOffset64(verifier, VT_FAR_STRING) &&
           verifier.VerifyString(far_string()) &&
           VerifyOffset64(verifier, VT_BIG_VECTOR) &&
           verifier.VerifyVector(big_vector()) &&
           VerifyOffset(verifier, VT_NEAR_STRING) &&
           verifier.VerifyString(near_string()) &&
           VerifyOffset64(verifier, VT_NESTED_ROOT) &&
           verifier.VerifyVector(nested_root()) &&
           verifier.VerifyNestedFlatBuffer<RootTable>(nested_root(), nullptr) &&
           VerifyOffset64(verifier, VT_FAR_STRUCT_VECTOR) &&
           verifier.VerifyVector(far_struct_vector()) &&
           VerifyOffset64(verifier, VT_BIG_STRUCT_VECTOR) &&
           verifier.VerifyVector(big_struct_vector()) &&
           VerifyOffset(verifier, VT_MANY_VECTORS) &&
           verifier.VerifyVector(many_vectors()) &&
           verifier.VerifyVectorOfTables(many_vectors()) &&
           VerifyOffset64(verifier, VT_FORCED_ALIGNED_VECTOR) &&
           verifier.VerifyVector(forced_aligned_vector()) &&
           verifier.EndTable();
  }
  RootTableT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(RootTableT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<RootTable> Pack(::flatbuffers::FlatBufferBuilder64 &_fbb, const RootTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct RootTableBuilder {
  typedef RootTable Table;
  ::flatbuffers::FlatBufferBuilder64 &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_far_vector(::flatbuffers::Offset64<::flatbuffers::Vector<uint8_t>> far_vector) {
    fbb_.AddOffset(RootTable::VT_FAR_VECTOR, far_vector);
  }
  void add_a(int32_t a) {
    fbb_.AddElement<int32_t>(RootTable::VT_A, a, 0);
  }
  void add_far_string(::flatbuffers::Offset64<::flatbuffers::String> far_string) {
    fbb_.AddOffset(RootTable::VT_FAR_STRING, far_string);
  }
  void add_big_vector(::flatbuffers::Offset64<::flatbuffers::Vector64<uint8_t>> big_vector) {
    fbb_.AddOffset(RootTable::VT_BIG_VECTOR, big_vector);
  }
  void add_near_string(::flatbuffers::Offset<::flatbuffers::String> near_string) {
    fbb_.AddOffset(RootTable::VT_NEAR_STRING, near_string);
  }
  void add_nested_root(::flatbuffers::Offset64<::flatbuffers::Vector64<uint8_t>> nested_root) {
    fbb_.AddOffset(RootTable::VT_NESTED_ROOT, nested_root);
  }
  void add_far_struct_vector(::flatbuffers::Offset64<::flatbuffers::Vector<const LeafStruct *>> far_struct_vector) {
    fbb_.AddOffset(RootTable::VT_FAR_STRUCT_VECTOR, far_struct_vector);
  }
  void add_big_struct_vector(::flatbuffers::Offset64<::flatbuffers::Vector64<const LeafStruct *>> big_struct_vector) {
    fbb_.AddOffset(RootTable::VT_BIG_STRUCT_VECTOR, big_struct_vector);
  }
  void add_many_vectors(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<WrapperTable>>> many_vectors) {
    fbb_.AddOffset(RootTable::VT_MANY_VECTORS, many_vectors);
  }
  void add_forced_aligned_vector(::flatbuffers::Offset64<::flatbuffers::Vector64<uint8_t>> forced_aligned_vector) {
    fbb_.AddOffset(RootTable::VT_FORCED_ALIGNED_VECTOR, forced_aligned_vector);
  }
  explicit RootTableBuilder(::flatbuffers::FlatBufferBuilder64 &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<RootTable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<RootTable>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<RootTable> CreateRootTable(
    ::flatbuffers::FlatBufferBuilder64 &_fbb,
    ::flatbuffers::Offset64<::flatbuffers::Vector<uint8_t>> far_vector = 0,
    int32_t a = 0,
    ::flatbuffers::Offset64<::flatbuffers::String> far_string = 0,
    ::flatbuffers::Offset64<::flatbuffers::Vector64<uint8_t>> big_vector = 0,
    ::flatbuffers::Offset<::flatbuffers::String> near_string = 0,
    ::flatbuffers::Offset64<::flatbuffers::Vector64<uint8_t>> nested_root = 0,
    ::flatbuffers::Offset64<::flatbuffers::Vector<const LeafStruct *>> far_struct_vector = 0,
    ::flatbuffers::Offset64<::flatbuffers::Vector64<const LeafStruct *>> big_struct_vector = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<WrapperTable>>> many_vectors = 0,
    ::flatbuffers::Offset64<::flatbuffers::Vector64<uint8_t>> forced_aligned_vector = 0) {
  RootTableBuilder builder_(_fbb);
  builder_.add_forced_aligned_vector(forced_aligned_vector);
  builder_.add_big_struct_vector(big_struct_vector);
  builder_.add_nested_root(nested_root);
  builder_.add_big_vector(big_vector);
  builder_.add_many_vectors(many_vectors);
  builder_.add_far_struct_vector(far_struct_vector);
  builder_.add_near_string(near_string);
  builder_.add_far_string(far_string);
  builder_.add_a(a);
  builder_.add_far_vector(far_vector);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<RootTable> CreateRootTableDirect(
    ::flatbuffers::FlatBufferBuilder64 &_fbb,
    const std::vector<uint8_t> *far_vector = nullptr,
    int32_t a = 0,
    const char *far_string = nullptr,
    const std::vector<uint8_t> *big_vector = nullptr,
    const char *near_string = nullptr,
    const std::vector<uint8_t> *nested_root = nullptr,
    const std::vector<LeafStruct> *far_struct_vector = nullptr,
    const std::vector<LeafStruct> *big_struct_vector = nullptr,
    const std::vector<::flatbuffers::Offset<WrapperTable>> *many_vectors = nullptr,
    const std::vector<uint8_t> *forced_aligned_vector = nullptr) {
  auto far_vector__ = far_vector ? _fbb.CreateVector64<::flatbuffers::Vector>(*far_vector) : 0;
  auto far_string__ = far_string ? _fbb.CreateString<::flatbuffers::Offset64>(far_string) : 0;
  auto big_vector__ = big_vector ? _fbb.CreateVector64(*big_vector) : 0;
  auto nested_root__ = nested_root ? _fbb.CreateVector64(*nested_root) : 0;
  auto far_struct_vector__ = far_struct_vector ? _fbb.CreateVectorOfStructs64<::flatbuffers::Vector>(*far_struct_vector) : 0;
  auto big_struct_vector__ = big_struct_vector ? _fbb.CreateVectorOfStructs64(*big_struct_vector) : 0;
  if (forced_aligned_vector) { _fbb.ForceVectorAlignment64(forced_aligned_vector->size(), sizeof(uint8_t), 32); }
  auto forced_aligned_vector__ = forced_aligned_vector ? _fbb.CreateVector64(*forced_aligned_vector) : 0;
  auto near_string__ = near_string ? _fbb.CreateString(near_string) : 0;
  auto many_vectors__ = many_vectors ? _fbb.CreateVector<::flatbuffers::Offset<WrapperTable>>(*many_vectors) : 0;
  return CreateRootTable(
      _fbb,
      far_vector__,
      a,
      far_string__,
      big_vector__,
      near_string__,
      nested_root__,
      far_struct_vector__,
      big_struct_vector__,
      many_vectors__,
      forced_aligned_vector__);
}

::flatbuffers::Offset<RootTable> CreateRootTable(::flatbuffers::FlatBufferBuilder64 &_fbb, const RootTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);


inline bool operator==(const WrapperTableT &lhs, const WrapperTableT &rhs) {
  return
      (lhs.vector == rhs.vector);
}

inline bool operator!=(const WrapperTableT &lhs, const WrapperTableT &rhs) {
    return !(lhs == rhs);
}


inline WrapperTableT *WrapperTable::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<WrapperTableT>(new WrapperTableT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void WrapperTable::UnPackTo(WrapperTableT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = vector(); if (_e) { _o->vector.resize(_e->size()); std::copy(_e->begin(), _e->end(), _o->vector.begin()); } }
}

inline ::flatbuffers::Offset<WrapperTable> WrapperTable::Pack(::flatbuffers::FlatBufferBuilder64 &_fbb, const WrapperTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateWrapperTable(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<WrapperTable> CreateWrapperTable(::flatbuffers::FlatBufferBuilder64 &_fbb, const WrapperTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder64 *__fbb; const WrapperTableT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _vector = _o->vector.size() ? _fbb.CreateVector64<::flatbuffers::Vector>(_o->vector) : 0;
  return CreateWrapperTable(
      _fbb,
      _vector);
}


inline bool operator==(const RootTableT &lhs, const RootTableT &rhs) {
  return
      (lhs.far_vector == rhs.far_vector) &&
      (lhs.a == rhs.a) &&
      (lhs.far_string == rhs.far_string) &&
      (lhs.big_vector == rhs.big_vector) &&
      (lhs.near_string == rhs.near_string) &&
      (lhs.nested_root == rhs.nested_root) &&
      (lhs.far_struct_vector == rhs.far_struct_vector) &&
      (lhs.big_struct_vector == rhs.big_struct_vector) &&
      (lhs.many_vectors.size() == rhs.many_vectors.size() && std::equal(lhs.many_vectors.cbegin(), lhs.many_vectors.cend(), rhs.many_vectors.cbegin(), [](std::unique_ptr<WrapperTableT> const &a, std::unique_ptr<WrapperTableT> const &b) { return (a == b) || (a && b && *a == *b); })) &&
      (lhs.forced_aligned_vector == rhs.forced_aligned_vector);
}

inline bool operator!=(const RootTableT &lhs, const RootTableT &rhs) {
    return !(lhs == rhs);
}


inline RootTableT::RootTableT(const RootTableT &o)
      : far_vector(o.far_vector),
        a(o.a),
        far_string(o.far_string),
        big_vector(o.big_vector),
        near_string(o.near_string),
        nested_root(o.nested_root),
        far_struct_vector(o.far_struct_vector),
        big_struct_vector(o.big_struct_vector),
        forced_aligned_vector(o.forced_aligned_vector) {
  many_vectors.reserve(o.many_vectors.size());
  for (const auto &many_vectors_ : o.many_vectors) { many_vectors.emplace_back((many_vectors_) ? new WrapperTableT(*many_vectors_) : nullptr); }
}

inline RootTableT &RootTableT::operator=(RootTableT o) FLATBUFFERS_NOEXCEPT {
  std::swap(far_vector, o.far_vector);
  std::swap(a, o.a);
  std::swap(far_string, o.far_string);
  std::swap(big_vector, o.big_vector);
  std::swap(near_string, o.near_string);
  std::swap(nested_root, o.nested_root);
  std::swap(far_struct_vector, o.far_struct_vector);
  std::swap(big_struct_vector, o.big_struct_vector);
  std::swap(many_vectors, o.many_vectors);
  std::swap(forced_aligned_vector, o.forced_aligned_vector);
  return *this;
}

inline RootTableT *RootTable::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<RootTableT>(new RootTableT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void RootTable::UnPackTo(RootTableT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = far_vector(); if (_e) { _o->far_vector.resize(_e->size()); std::copy(_e->begin(), _e->end(), _o->far_vector.begin()); } }
  { auto _e = a(); _o->a = _e; }
  { auto _e = far_string(); if (_e) _o->far_string = _e->str(); }
  { auto _e = big_vector(); if (_e) { _o->big_vector.resize(_e->size()); std::copy(_e->begin(), _e->end(), _o->big_vector.begin()); } }
  { auto _e = near_string(); if (_e) _o->near_string = _e->str(); }
  { auto _e = nested_root(); if (_e) { _o->nested_root.resize(_e->size()); std::copy(_e->begin(), _e->end(), _o->nested_root.begin()); } }
  { auto _e = far_struct_vector(); if (_e) { _o->far_struct_vector.resize(_e->size()); for (::flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->far_struct_vector[_i] = *_e->Get(_i); } } else { _o->far_struct_vector.resize(0); } }
  { auto _e = big_struct_vector(); if (_e) { _o->big_struct_vector.resize(_e->size()); for (::flatbuffers::uoffset64_t _i = 0; _i < _e->size(); _i++) { _o->big_struct_vector[_i] = *_e->Get(_i); } } else { _o->big_struct_vector.resize(0); } }
  { auto _e = many_vectors(); if (_e) { _o->many_vectors.resize(_e->size()); for (::flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { if(_o->many_vectors[_i]) { _e->Get(_i)->UnPackTo(_o->many_vectors[_i].get(), _resolver); } else { _o->many_vectors[_i] = std::unique_ptr<WrapperTableT>(_e->Get(_i)->UnPack(_resolver)); } } } else { _o->many_vectors.resize(0); } }
  { auto _e = forced_aligned_vector(); if (_e) { _o->forced_aligned_vector.resize(_e->size()); std::copy(_e->begin(), _e->end(), _o->forced_aligned_vector.begin()); } }
}

inline ::flatbuffers::Offset<RootTable> RootTable::Pack(::flatbuffers::FlatBufferBuilder64 &_fbb, const RootTableT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateRootTable(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<RootTable> CreateRootTable(::flatbuffers::FlatBufferBuilder64 &_fbb, const RootTableT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder64 *__fbb; const RootTableT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _far_vector = _o->far_vector.size() ? _fbb.CreateVector64<::flatbuffers::Vector>(_o->far_vector) : 0;
  auto _a = _o->a;
  auto _far_string = _o->far_string.empty() ? 0 : _fbb.CreateString<::flatbuffers::Offset64>(_o->far_string);
  auto _big_vector = _o->big_vector.size() ? _fbb.CreateVector64(_o->big_vector) : 0;
  auto _near_string = _o->near_string.empty() ? 0 : _fbb.CreateString(_o->near_string);
  auto _nested_root = _o->nested_root.size() ? _fbb.CreateVector64(_o->nested_root) : 0;
  auto _far_struct_vector = _o->far_struct_vector.size() ? _fbb.CreateVectorOfStructs64<::flatbuffers::Vector>(_o->far_struct_vector) : 0;
  auto _big_struct_vector = _o->big_struct_vector.size() ? _fbb.CreateVectorOfStructs64(_o->big_struct_vector) : 0;
  auto _many_vectors = _o->many_vectors.size() ? _fbb.CreateVector<::flatbuffers::Offset<WrapperTable>> (_o->many_vectors.size(), [](size_t i, _VectorArgs *__va) { return CreateWrapperTable(*__va->__fbb, __va->__o->many_vectors[i].get(), __va->__rehasher); }, &_va ) : 0;
  _fbb.ForceVectorAlignment64(_o->forced_aligned_vector.size(), sizeof(uint8_t), 32);
  auto _forced_aligned_vector = _o->forced_aligned_vector.size() ? _fbb.CreateVector64(_o->forced_aligned_vector) : 0;
  return CreateRootTable(
      _fbb,
      _far_vector,
      _a,
      _far_string,
      _big_vector,
      _near_string,
      _nested_root,
      _far_struct_vector,
      _big_struct_vector,
      _many_vectors,
      _forced_aligned_vector);
}

inline const ::flatbuffers::TypeTable *LeafStructTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_INT, 0, -1 },
    { ::flatbuffers::ET_DOUBLE, 0, -1 }
  };
  static const int64_t values[] = { 0, 8, 16 };
  static const char * const names[] = {
    "a",
    "b"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_STRUCT, 2, type_codes, nullptr, nullptr, values, names
  };
  return &tt;
}

inline const ::flatbuffers::TypeTable *WrapperTableTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_CHAR, 1, -1 }
  };
  static const char * const names[] = {
    "vector"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 1, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const ::flatbuffers::TypeTable *RootTableTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_UCHAR, 1, -1 },
    { ::flatbuffers::ET_INT, 0, -1 },
    { ::flatbuffers::ET_STRING, 0, -1 },
    { ::flatbuffers::ET_UCHAR, 1, -1 },
    { ::flatbuffers::ET_STRING, 0, -1 },
    { ::flatbuffers::ET_UCHAR, 1, -1 },
    { ::flatbuffers::ET_SEQUENCE, 1, 0 },
    { ::flatbuffers::ET_SEQUENCE, 1, 0 },
    { ::flatbuffers::ET_SEQUENCE, 1, 1 },
    { ::flatbuffers::ET_UCHAR, 1, -1 }
  };
  static const ::flatbuffers::TypeFunction type_refs[] = {
    LeafStructTypeTable,
    WrapperTableTypeTable
  };
  static const char * const names[] = {
    "far_vector",
    "a",
    "far_string",
    "big_vector",
    "near_string",
    "nested_root",
    "far_struct_vector",
    "big_struct_vector",
    "many_vectors",
    "forced_aligned_vector"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 10, type_codes, type_refs, nullptr, nullptr, names
  };
  return &tt;
}

inline const RootTable *GetRootTable(const void *buf) {
  return ::flatbuffers::GetRoot<RootTable>(buf);
}

inline const RootTable *GetSizePrefixedRootTable(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<RootTable,::flatbuffers::uoffset64_t>(buf);
}

inline RootTable *GetMutableRootTable(void *buf) {
  return ::flatbuffers::GetMutableRoot<RootTable>(buf);
}

inline RootTable *GetMutableSizePrefixedRootTable(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<RootTable,::flatbuffers::uoffset64_t>(buf);
}

inline bool VerifyRootTableBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<RootTable>(nullptr);
}

inline bool VerifySizePrefixedRootTableBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<RootTable,::flatbuffers::uoffset64_t>(nullptr);
}

inline void FinishRootTableBuffer(
    ::flatbuffers::FlatBufferBuilder64 &fbb,
    ::flatbuffers::Offset<RootTable> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedRootTableBuffer(
    ::flatbuffers::FlatBufferBuilder64 &fbb,
    ::flatbuffers::Offset<RootTable> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<RootTableT> UnPackRootTable(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<RootTableT>(GetRootTable(buf)->UnPack(res));
}

inline std::unique_ptr<RootTableT> UnPackSizePrefixedRootTable(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<RootTableT>(GetSizePrefixedRootTable(buf)->UnPack(res));
}

#endif  // FLATBUFFERS_GENERATED_TEST64BIT_H_
