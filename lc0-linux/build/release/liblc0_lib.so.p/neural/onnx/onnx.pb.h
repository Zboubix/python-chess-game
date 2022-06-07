// This file is AUTOGENERATED, do not edit.
#pragma once
#include "utils/protomessage.h"
namespace pblczero {
  class TensorProto : public lczero::ProtoMessage {
   public:
    enum DataType {
      UNDEFINED = 0,
      FLOAT = 1,
      UINT8 = 2,
      INT8 = 3,
      UINT16 = 4,
      INT16 = 5,
      INT32 = 6,
      INT64 = 7,
      STRING = 8,
      BOOL = 9,
      FLOAT16 = 10,
      DOUBLE = 11,
      UINT32 = 12,
      UINT64 = 13,
      COMPLEX64 = 14,
      COMPLEX128 = 15,
      BFLOAT16 = 16,
    };
    static constexpr std::array<DataType,17> DataType_AllValues = {
      UNDEFINED,
      FLOAT,
      UINT8,
      INT8,
      UINT16,
      INT16,
      INT32,
      INT64,
      STRING,
      BOOL,
      FLOAT16,
      DOUBLE,
      UINT32,
      UINT64,
      COMPLEX64,
      COMPLEX128,
      BFLOAT16,
    };
    static std::string DataType_Name(DataType val) {
      switch (val) {
        case UNDEFINED:
          return "UNDEFINED";
        case FLOAT:
          return "FLOAT";
        case UINT8:
          return "UINT8";
        case INT8:
          return "INT8";
        case UINT16:
          return "UINT16";
        case INT16:
          return "INT16";
        case INT32:
          return "INT32";
        case INT64:
          return "INT64";
        case STRING:
          return "STRING";
        case BOOL:
          return "BOOL";
        case FLOAT16:
          return "FLOAT16";
        case DOUBLE:
          return "DOUBLE";
        case UINT32:
          return "UINT32";
        case UINT64:
          return "UINT64";
        case COMPLEX64:
          return "COMPLEX64";
        case COMPLEX128:
          return "COMPLEX128";
        case BFLOAT16:
          return "BFLOAT16";
      };
      return "DataType(" + std::to_string(val) + ")";
    }

    void add_dims(std::int64_t val) { dims_.emplace_back(val); }
    const std::vector<std::int64_t>& dims() const { return dims_; }
    std::int64_t dims(size_t idx) const { return dims_[idx]; }
    size_t dims_size() const { return dims_.size(); }

    bool has_data_type() const { return has_data_type_; }
    DataType data_type() const { return data_type_; }
    void set_data_type(DataType val) {
      has_data_type_ = true;
      data_type_ = val;
    }

    bool has_name() const { return has_name_; }
    std::string_view name() const { return name_; }
    void set_name(std::string_view val) {
      has_name_ = true;
      name_ = val;
    }

    bool has_raw_data() const { return has_raw_data_; }
    std::string_view raw_data() const { return raw_data_; }
    void set_raw_data(std::string_view val) {
      has_raw_data_ = true;
      raw_data_ = val;
    }

    bool has_doc_string() const { return has_doc_string_; }
    std::string_view doc_string() const { return doc_string_; }
    void set_doc_string(std::string_view val) {
      has_doc_string_ = true;
      doc_string_ = val;
    }

    std::string OutputAsString() const override {
      std::string out;
      for (const auto& x : dims_) AppendVarInt(1, x, &out);
      if (has_data_type_) AppendVarInt(2, data_type_, &out);
      if (has_name_) AppendString(8, name_, &out);
      if (has_raw_data_) AppendString(9, raw_data_, &out);
      if (has_doc_string_) AppendString(12, doc_string_, &out);
      return out;
    }

    void Clear() override {
      dims_.clear();
      has_data_type_ = false;
      data_type_ = {};
      has_name_ = false;
      name_ = {};
      has_raw_data_ = false;
      raw_data_ = {};
      has_doc_string_ = false;
      doc_string_ = {};
    }

   private:
    void SetVarInt(int field_id, std::uint64_t val) override {
      switch (field_id) {
        case 1: dims_.emplace_back(static_cast<std::int64_t>(val)); break;
        case 2: set_data_type(static_cast<DataType>(val)); break;
      }
    }
    void SetString(int field_id, std::string_view val) override {
      switch (field_id) {
        case 8: set_name(val); break;
        case 9: set_raw_data(val); break;
        case 12: set_doc_string(val); break;
      }
    }

    std::vector<std::int64_t> dims_;
    bool has_data_type_{};
    DataType data_type_{};
    bool has_name_{};
    std::string name_{};
    bool has_raw_data_{};
    std::string raw_data_{};
    bool has_doc_string_{};
    std::string doc_string_{};
  };
  class AttributeProto : public lczero::ProtoMessage {
   public:
    enum AttributeType {
      UNDEFINED = 0,
      FLOAT = 1,
      INT = 2,
      STRING = 3,
      TENSOR = 4,
      FLOATS = 6,
      INTS = 7,
      STRINGS = 8,
      TENSORS = 9,
    };
    static constexpr std::array<AttributeType,9> AttributeType_AllValues = {
      UNDEFINED,
      FLOAT,
      INT,
      STRING,
      TENSOR,
      FLOATS,
      INTS,
      STRINGS,
      TENSORS,
    };
    static std::string AttributeType_Name(AttributeType val) {
      switch (val) {
        case UNDEFINED:
          return "UNDEFINED";
        case FLOAT:
          return "FLOAT";
        case INT:
          return "INT";
        case STRING:
          return "STRING";
        case TENSOR:
          return "TENSOR";
        case FLOATS:
          return "FLOATS";
        case INTS:
          return "INTS";
        case STRINGS:
          return "STRINGS";
        case TENSORS:
          return "TENSORS";
      };
      return "AttributeType(" + std::to_string(val) + ")";
    }

    bool has_name() const { return has_name_; }
    std::string_view name() const { return name_; }
    void set_name(std::string_view val) {
      has_name_ = true;
      name_ = val;
    }

    bool has_doc_string() const { return has_doc_string_; }
    std::string_view doc_string() const { return doc_string_; }
    void set_doc_string(std::string_view val) {
      has_doc_string_ = true;
      doc_string_ = val;
    }

    bool has_f() const { return has_f_; }
    float f() const { return f_; }
    void set_f(float val) {
      has_f_ = true;
      f_ = val;
    }

    bool has_i() const { return has_i_; }
    std::int64_t i() const { return i_; }
    void set_i(std::int64_t val) {
      has_i_ = true;
      i_ = val;
    }

    bool has_s() const { return has_s_; }
    std::string_view s() const { return s_; }
    void set_s(std::string_view val) {
      has_s_ = true;
      s_ = val;
    }

    bool has_t() const { return has_t_; }
    const TensorProto& t() const { return t_; }
    TensorProto* mutable_t() {
      has_t_ = true;
      return &t_;
    }

    void add_floats(float val) { floats_.emplace_back(val); }
    const std::vector<float>& floats() const { return floats_; }
    float floats(size_t idx) const { return floats_[idx]; }
    size_t floats_size() const { return floats_.size(); }

    void add_ints(std::int64_t val) { ints_.emplace_back(val); }
    const std::vector<std::int64_t>& ints() const { return ints_; }
    std::int64_t ints(size_t idx) const { return ints_[idx]; }
    size_t ints_size() const { return ints_.size(); }

    void add_strings(std::string_view val) { strings_.emplace_back(val); }
    const std::vector<std::string>& strings() const { return strings_; }
    std::string_view strings(size_t idx) const { return strings_[idx]; }
    size_t strings_size() const { return strings_.size(); }

    TensorProto* add_tensors() { return &tensors_.emplace_back(); }
    const std::vector<TensorProto>& tensors() const { return tensors_; }
    const TensorProto& tensors(size_t idx) const { return tensors_[idx]; }
    size_t tensors_size() const { return tensors_.size(); }

    bool has_type() const { return has_type_; }
    AttributeType type() const { return type_; }
    void set_type(AttributeType val) {
      has_type_ = true;
      type_ = val;
    }

    std::string OutputAsString() const override {
      std::string out;
      if (has_name_) AppendString(1, name_, &out);
      if (has_f_) AppendInt32(2, bit_cast<std::uint32_t>(f_), &out);
      if (has_i_) AppendVarInt(3, i_, &out);
      if (has_s_) AppendString(4, s_, &out);
      if (has_t_) AppendString(5, t_.OutputAsString(), &out);
      for (const auto& x : floats_) AppendInt32(7, bit_cast<std::uint32_t>(x), &out);
      for (const auto& x : ints_) AppendVarInt(8, x, &out);
      for (const auto& x : strings_) AppendString(9, x, &out);
      for (const auto& x : tensors_) AppendString(10, x.OutputAsString(), &out);
      if (has_doc_string_) AppendString(13, doc_string_, &out);
      if (has_type_) AppendVarInt(20, type_, &out);
      return out;
    }

    void Clear() override {
      has_name_ = false;
      name_ = {};
      has_doc_string_ = false;
      doc_string_ = {};
      has_f_ = false;
      f_ = {};
      has_i_ = false;
      i_ = {};
      has_s_ = false;
      s_ = {};
      has_t_ = false;
      t_ = {};
      floats_.clear();
      ints_.clear();
      strings_.clear();
      tensors_.clear();
      has_type_ = false;
      type_ = {};
    }

   private:
    void SetString(int field_id, std::string_view val) override {
      switch (field_id) {
        case 1: set_name(val); break;
        case 13: set_doc_string(val); break;
        case 4: set_s(val); break;
        case 5: mutable_t()->MergeFromString(val); break;
        case 9: strings_.emplace_back(val); break;
        case 10: add_tensors()->MergeFromString(val); break;
      }
    }
    void SetInt32(int field_id, std::uint32_t val) override {
      switch (field_id) {
        case 2: set_f(bit_cast<float>(val)); break;
        case 7: floats_.emplace_back(bit_cast<float>(val)); break;
      }
    }
    void SetVarInt(int field_id, std::uint64_t val) override {
      switch (field_id) {
        case 3: set_i(static_cast<std::int64_t>(val)); break;
        case 8: ints_.emplace_back(static_cast<std::int64_t>(val)); break;
        case 20: set_type(static_cast<AttributeType>(val)); break;
      }
    }

    bool has_name_{};
    std::string name_{};
    bool has_doc_string_{};
    std::string doc_string_{};
    bool has_f_{};
    float f_{};
    bool has_i_{};
    std::int64_t i_{};
    bool has_s_{};
    std::string s_{};
    bool has_t_{};
    TensorProto t_{};
    std::vector<float> floats_;
    std::vector<std::int64_t> ints_;
    std::vector<std::string> strings_;
    std::vector<TensorProto> tensors_;
    bool has_type_{};
    AttributeType type_{};
  };
  class NodeProto : public lczero::ProtoMessage {
   public:

    void add_input(std::string_view val) { input_.emplace_back(val); }
    const std::vector<std::string>& input() const { return input_; }
    std::string_view input(size_t idx) const { return input_[idx]; }
    size_t input_size() const { return input_.size(); }

    void add_output(std::string_view val) { output_.emplace_back(val); }
    const std::vector<std::string>& output() const { return output_; }
    std::string_view output(size_t idx) const { return output_[idx]; }
    size_t output_size() const { return output_.size(); }

    bool has_name() const { return has_name_; }
    std::string_view name() const { return name_; }
    void set_name(std::string_view val) {
      has_name_ = true;
      name_ = val;
    }

    bool has_op_type() const { return has_op_type_; }
    std::string_view op_type() const { return op_type_; }
    void set_op_type(std::string_view val) {
      has_op_type_ = true;
      op_type_ = val;
    }

    AttributeProto* add_attribute() { return &attribute_.emplace_back(); }
    const std::vector<AttributeProto>& attribute() const { return attribute_; }
    const AttributeProto& attribute(size_t idx) const { return attribute_[idx]; }
    size_t attribute_size() const { return attribute_.size(); }

    bool has_doc_string() const { return has_doc_string_; }
    std::string_view doc_string() const { return doc_string_; }
    void set_doc_string(std::string_view val) {
      has_doc_string_ = true;
      doc_string_ = val;
    }

    bool has_domain() const { return has_domain_; }
    std::string_view domain() const { return domain_; }
    void set_domain(std::string_view val) {
      has_domain_ = true;
      domain_ = val;
    }

    std::string OutputAsString() const override {
      std::string out;
      for (const auto& x : input_) AppendString(1, x, &out);
      for (const auto& x : output_) AppendString(2, x, &out);
      if (has_name_) AppendString(3, name_, &out);
      if (has_op_type_) AppendString(4, op_type_, &out);
      for (const auto& x : attribute_) AppendString(5, x.OutputAsString(), &out);
      if (has_doc_string_) AppendString(6, doc_string_, &out);
      if (has_domain_) AppendString(7, domain_, &out);
      return out;
    }

    void Clear() override {
      input_.clear();
      output_.clear();
      has_name_ = false;
      name_ = {};
      has_op_type_ = false;
      op_type_ = {};
      attribute_.clear();
      has_doc_string_ = false;
      doc_string_ = {};
      has_domain_ = false;
      domain_ = {};
    }

   private:
    void SetString(int field_id, std::string_view val) override {
      switch (field_id) {
        case 1: input_.emplace_back(val); break;
        case 2: output_.emplace_back(val); break;
        case 3: set_name(val); break;
        case 4: set_op_type(val); break;
        case 5: add_attribute()->MergeFromString(val); break;
        case 6: set_doc_string(val); break;
        case 7: set_domain(val); break;
      }
    }

    std::vector<std::string> input_;
    std::vector<std::string> output_;
    bool has_name_{};
    std::string name_{};
    bool has_op_type_{};
    std::string op_type_{};
    std::vector<AttributeProto> attribute_;
    bool has_doc_string_{};
    std::string doc_string_{};
    bool has_domain_{};
    std::string domain_{};
  };
  class TensorShapeProto : public lczero::ProtoMessage {
   public:
    class Dimension : public lczero::ProtoMessage {
     public:

      bool has_dim_value() const { return has_dim_value_; }
      std::int64_t dim_value() const { return dim_value_; }
      void set_dim_value(std::int64_t val) {
        has_dim_value_ = true;
        dim_value_ = val;
      }

      bool has_dim_param() const { return has_dim_param_; }
      std::string_view dim_param() const { return dim_param_; }
      void set_dim_param(std::string_view val) {
        has_dim_param_ = true;
        dim_param_ = val;
      }

      std::string OutputAsString() const override {
        std::string out;
        if (has_dim_value_) AppendVarInt(1, dim_value_, &out);
        if (has_dim_param_) AppendString(2, dim_param_, &out);
        return out;
      }

      void Clear() override {
        has_dim_value_ = false;
        dim_value_ = {};
        has_dim_param_ = false;
        dim_param_ = {};
      }

     private:
      void SetVarInt(int field_id, std::uint64_t val) override {
        switch (field_id) {
          case 1: set_dim_value(static_cast<std::int64_t>(val)); break;
        }
      }
      void SetString(int field_id, std::string_view val) override {
        switch (field_id) {
          case 2: set_dim_param(val); break;
        }
      }

      bool has_dim_value_{};
      std::int64_t dim_value_{};
      bool has_dim_param_{};
      std::string dim_param_{};
    };

    Dimension* add_dim() { return &dim_.emplace_back(); }
    const std::vector<Dimension>& dim() const { return dim_; }
    const Dimension& dim(size_t idx) const { return dim_[idx]; }
    size_t dim_size() const { return dim_.size(); }

    std::string OutputAsString() const override {
      std::string out;
      for (const auto& x : dim_) AppendString(1, x.OutputAsString(), &out);
      return out;
    }

    void Clear() override {
      dim_.clear();
    }

   private:
    void SetString(int field_id, std::string_view val) override {
      switch (field_id) {
        case 1: add_dim()->MergeFromString(val); break;
      }
    }

    std::vector<Dimension> dim_;
  };
  class TypeProto : public lczero::ProtoMessage {
   public:
    class Tensor : public lczero::ProtoMessage {
     public:

      bool has_elem_type() const { return has_elem_type_; }
      TensorProto::DataType elem_type() const { return elem_type_; }
      void set_elem_type(TensorProto::DataType val) {
        has_elem_type_ = true;
        elem_type_ = val;
      }

      bool has_shape() const { return has_shape_; }
      const TensorShapeProto& shape() const { return shape_; }
      TensorShapeProto* mutable_shape() {
        has_shape_ = true;
        return &shape_;
      }

      std::string OutputAsString() const override {
        std::string out;
        if (has_elem_type_) AppendVarInt(1, elem_type_, &out);
        if (has_shape_) AppendString(2, shape_.OutputAsString(), &out);
        return out;
      }

      void Clear() override {
        has_elem_type_ = false;
        elem_type_ = {};
        has_shape_ = false;
        shape_ = {};
      }

     private:
      void SetVarInt(int field_id, std::uint64_t val) override {
        switch (field_id) {
          case 1: set_elem_type(static_cast<TensorProto::DataType>(val)); break;
        }
      }
      void SetString(int field_id, std::string_view val) override {
        switch (field_id) {
          case 2: mutable_shape()->MergeFromString(val); break;
        }
      }

      bool has_elem_type_{};
      TensorProto::DataType elem_type_{};
      bool has_shape_{};
      TensorShapeProto shape_{};
    };

    bool has_tensor_type() const { return has_tensor_type_; }
    const Tensor& tensor_type() const { return tensor_type_; }
    Tensor* mutable_tensor_type() {
      has_tensor_type_ = true;
      return &tensor_type_;
    }

    std::string OutputAsString() const override {
      std::string out;
      if (has_tensor_type_) AppendString(1, tensor_type_.OutputAsString(), &out);
      return out;
    }

    void Clear() override {
      has_tensor_type_ = false;
      tensor_type_ = {};
    }

   private:
    void SetString(int field_id, std::string_view val) override {
      switch (field_id) {
        case 1: mutable_tensor_type()->MergeFromString(val); break;
      }
    }

    bool has_tensor_type_{};
    Tensor tensor_type_{};
  };
  class ValueInfoProto : public lczero::ProtoMessage {
   public:

    bool has_name() const { return has_name_; }
    std::string_view name() const { return name_; }
    void set_name(std::string_view val) {
      has_name_ = true;
      name_ = val;
    }

    bool has_type() const { return has_type_; }
    const TypeProto& type() const { return type_; }
    TypeProto* mutable_type() {
      has_type_ = true;
      return &type_;
    }

    bool has_doc_string() const { return has_doc_string_; }
    std::string_view doc_string() const { return doc_string_; }
    void set_doc_string(std::string_view val) {
      has_doc_string_ = true;
      doc_string_ = val;
    }

    std::string OutputAsString() const override {
      std::string out;
      if (has_name_) AppendString(1, name_, &out);
      if (has_type_) AppendString(2, type_.OutputAsString(), &out);
      if (has_doc_string_) AppendString(3, doc_string_, &out);
      return out;
    }

    void Clear() override {
      has_name_ = false;
      name_ = {};
      has_type_ = false;
      type_ = {};
      has_doc_string_ = false;
      doc_string_ = {};
    }

   private:
    void SetString(int field_id, std::string_view val) override {
      switch (field_id) {
        case 1: set_name(val); break;
        case 2: mutable_type()->MergeFromString(val); break;
        case 3: set_doc_string(val); break;
      }
    }

    bool has_name_{};
    std::string name_{};
    bool has_type_{};
    TypeProto type_{};
    bool has_doc_string_{};
    std::string doc_string_{};
  };
  class GraphProto : public lczero::ProtoMessage {
   public:

    NodeProto* add_node() { return &node_.emplace_back(); }
    const std::vector<NodeProto>& node() const { return node_; }
    const NodeProto& node(size_t idx) const { return node_[idx]; }
    size_t node_size() const { return node_.size(); }

    bool has_name() const { return has_name_; }
    std::string_view name() const { return name_; }
    void set_name(std::string_view val) {
      has_name_ = true;
      name_ = val;
    }

    TensorProto* add_initializer() { return &initializer_.emplace_back(); }
    const std::vector<TensorProto>& initializer() const { return initializer_; }
    const TensorProto& initializer(size_t idx) const { return initializer_[idx]; }
    size_t initializer_size() const { return initializer_.size(); }

    bool has_doc_string() const { return has_doc_string_; }
    std::string_view doc_string() const { return doc_string_; }
    void set_doc_string(std::string_view val) {
      has_doc_string_ = true;
      doc_string_ = val;
    }

    ValueInfoProto* add_input() { return &input_.emplace_back(); }
    const std::vector<ValueInfoProto>& input() const { return input_; }
    const ValueInfoProto& input(size_t idx) const { return input_[idx]; }
    size_t input_size() const { return input_.size(); }

    ValueInfoProto* add_output() { return &output_.emplace_back(); }
    const std::vector<ValueInfoProto>& output() const { return output_; }
    const ValueInfoProto& output(size_t idx) const { return output_[idx]; }
    size_t output_size() const { return output_.size(); }

    std::string OutputAsString() const override {
      std::string out;
      for (const auto& x : node_) AppendString(1, x.OutputAsString(), &out);
      if (has_name_) AppendString(2, name_, &out);
      for (const auto& x : initializer_) AppendString(5, x.OutputAsString(), &out);
      if (has_doc_string_) AppendString(10, doc_string_, &out);
      for (const auto& x : input_) AppendString(11, x.OutputAsString(), &out);
      for (const auto& x : output_) AppendString(12, x.OutputAsString(), &out);
      return out;
    }

    void Clear() override {
      node_.clear();
      has_name_ = false;
      name_ = {};
      initializer_.clear();
      has_doc_string_ = false;
      doc_string_ = {};
      input_.clear();
      output_.clear();
    }

   private:
    void SetString(int field_id, std::string_view val) override {
      switch (field_id) {
        case 1: add_node()->MergeFromString(val); break;
        case 2: set_name(val); break;
        case 5: add_initializer()->MergeFromString(val); break;
        case 10: set_doc_string(val); break;
        case 11: add_input()->MergeFromString(val); break;
        case 12: add_output()->MergeFromString(val); break;
      }
    }

    std::vector<NodeProto> node_;
    bool has_name_{};
    std::string name_{};
    std::vector<TensorProto> initializer_;
    bool has_doc_string_{};
    std::string doc_string_{};
    std::vector<ValueInfoProto> input_;
    std::vector<ValueInfoProto> output_;
  };
  class OperatorSetIdProto : public lczero::ProtoMessage {
   public:

    bool has_domain() const { return has_domain_; }
    std::string_view domain() const { return domain_; }
    void set_domain(std::string_view val) {
      has_domain_ = true;
      domain_ = val;
    }

    bool has_version() const { return has_version_; }
    std::int64_t version() const { return version_; }
    void set_version(std::int64_t val) {
      has_version_ = true;
      version_ = val;
    }

    std::string OutputAsString() const override {
      std::string out;
      if (has_domain_) AppendString(1, domain_, &out);
      if (has_version_) AppendVarInt(2, version_, &out);
      return out;
    }

    void Clear() override {
      has_domain_ = false;
      domain_ = {};
      has_version_ = false;
      version_ = {};
    }

   private:
    void SetString(int field_id, std::string_view val) override {
      switch (field_id) {
        case 1: set_domain(val); break;
      }
    }
    void SetVarInt(int field_id, std::uint64_t val) override {
      switch (field_id) {
        case 2: set_version(static_cast<std::int64_t>(val)); break;
      }
    }

    bool has_domain_{};
    std::string domain_{};
    bool has_version_{};
    std::int64_t version_{};
  };
  class ModelProto : public lczero::ProtoMessage {
   public:

    bool has_ir_version() const { return has_ir_version_; }
    std::int64_t ir_version() const { return ir_version_; }
    void set_ir_version(std::int64_t val) {
      has_ir_version_ = true;
      ir_version_ = val;
    }

    bool has_producer_name() const { return has_producer_name_; }
    std::string_view producer_name() const { return producer_name_; }
    void set_producer_name(std::string_view val) {
      has_producer_name_ = true;
      producer_name_ = val;
    }

    bool has_producer_version() const { return has_producer_version_; }
    std::string_view producer_version() const { return producer_version_; }
    void set_producer_version(std::string_view val) {
      has_producer_version_ = true;
      producer_version_ = val;
    }

    bool has_domain() const { return has_domain_; }
    std::string_view domain() const { return domain_; }
    void set_domain(std::string_view val) {
      has_domain_ = true;
      domain_ = val;
    }

    bool has_model_version() const { return has_model_version_; }
    std::int64_t model_version() const { return model_version_; }
    void set_model_version(std::int64_t val) {
      has_model_version_ = true;
      model_version_ = val;
    }

    bool has_doc_string() const { return has_doc_string_; }
    std::string_view doc_string() const { return doc_string_; }
    void set_doc_string(std::string_view val) {
      has_doc_string_ = true;
      doc_string_ = val;
    }

    bool has_graph() const { return has_graph_; }
    const GraphProto& graph() const { return graph_; }
    GraphProto* mutable_graph() {
      has_graph_ = true;
      return &graph_;
    }

    OperatorSetIdProto* add_opset_import() { return &opset_import_.emplace_back(); }
    const std::vector<OperatorSetIdProto>& opset_import() const { return opset_import_; }
    const OperatorSetIdProto& opset_import(size_t idx) const { return opset_import_[idx]; }
    size_t opset_import_size() const { return opset_import_.size(); }

    std::string OutputAsString() const override {
      std::string out;
      if (has_ir_version_) AppendVarInt(1, ir_version_, &out);
      if (has_producer_name_) AppendString(2, producer_name_, &out);
      if (has_producer_version_) AppendString(3, producer_version_, &out);
      if (has_domain_) AppendString(4, domain_, &out);
      if (has_model_version_) AppendVarInt(5, model_version_, &out);
      if (has_doc_string_) AppendString(6, doc_string_, &out);
      if (has_graph_) AppendString(7, graph_.OutputAsString(), &out);
      for (const auto& x : opset_import_) AppendString(8, x.OutputAsString(), &out);
      return out;
    }

    void Clear() override {
      has_ir_version_ = false;
      ir_version_ = {};
      has_producer_name_ = false;
      producer_name_ = {};
      has_producer_version_ = false;
      producer_version_ = {};
      has_domain_ = false;
      domain_ = {};
      has_model_version_ = false;
      model_version_ = {};
      has_doc_string_ = false;
      doc_string_ = {};
      has_graph_ = false;
      graph_ = {};
      opset_import_.clear();
    }

   private:
    void SetVarInt(int field_id, std::uint64_t val) override {
      switch (field_id) {
        case 1: set_ir_version(static_cast<std::int64_t>(val)); break;
        case 5: set_model_version(static_cast<std::int64_t>(val)); break;
      }
    }
    void SetString(int field_id, std::string_view val) override {
      switch (field_id) {
        case 2: set_producer_name(val); break;
        case 3: set_producer_version(val); break;
        case 4: set_domain(val); break;
        case 6: set_doc_string(val); break;
        case 7: mutable_graph()->MergeFromString(val); break;
        case 8: add_opset_import()->MergeFromString(val); break;
      }
    }

    bool has_ir_version_{};
    std::int64_t ir_version_{};
    bool has_producer_name_{};
    std::string producer_name_{};
    bool has_producer_version_{};
    std::string producer_version_{};
    bool has_domain_{};
    std::string domain_{};
    bool has_model_version_{};
    std::int64_t model_version_{};
    bool has_doc_string_{};
    std::string doc_string_{};
    bool has_graph_{};
    GraphProto graph_{};
    std::vector<OperatorSetIdProto> opset_import_;
  };
}  // namespace pblczero
