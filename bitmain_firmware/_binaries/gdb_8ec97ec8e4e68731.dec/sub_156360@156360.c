char *__fastcall sub_156360(int a1)
{
  char *result; // r0

  switch ( a1 )
  {
    case 0:
      result = "OP_NULL";
      break;
    case 1:
      result = "BINOP_ADD";
      break;
    case 2:
      result = "BINOP_SUB";
      break;
    case 3:
      result = "BINOP_MUL";
      break;
    case 4:
      result = "BINOP_DIV";
      break;
    case 5:
      result = "BINOP_REM";
      break;
    case 6:
      result = "BINOP_MOD";
      break;
    case 7:
      result = "BINOP_LSH";
      break;
    case 8:
      result = "BINOP_RSH";
      break;
    case 9:
      result = "BINOP_LOGICAL_AND";
      break;
    case 10:
      result = "BINOP_LOGICAL_OR";
      break;
    case 11:
      result = "BINOP_BITWISE_AND";
      break;
    case 12:
      result = "BINOP_BITWISE_IOR";
      break;
    case 13:
      result = "BINOP_BITWISE_XOR";
      break;
    case 14:
      result = "BINOP_EQUAL";
      break;
    case 15:
      result = "BINOP_NOTEQUAL";
      break;
    case 16:
      result = "BINOP_LESS";
      break;
    case 17:
      result = "BINOP_GTR";
      break;
    case 18:
      result = "BINOP_LEQ";
      break;
    case 19:
      result = "BINOP_GEQ";
      break;
    case 20:
      result = "BINOP_REPEAT";
      break;
    case 21:
      result = "BINOP_ASSIGN";
      break;
    case 22:
      result = "BINOP_COMMA";
      break;
    case 23:
      result = "BINOP_SUBSCRIPT";
      break;
    case 24:
      result = "BINOP_EXP";
      break;
    case 25:
      result = "BINOP_MIN";
      break;
    case 26:
      result = "BINOP_MAX";
      break;
    case 27:
      result = "STRUCTOP_MEMBER";
      break;
    case 28:
      result = "STRUCTOP_MPTR";
      break;
    case 29:
      result = "TYPE_INSTANCE";
      break;
    case 30:
      result = "BINOP_INTDIV";
      break;
    case 31:
      result = "BINOP_ASSIGN_MODIFY";
      break;
    case 32:
      result = "BINOP_VAL";
      break;
    case 33:
      result = "BINOP_CONCAT";
      break;
    case 34:
      result = "BINOP_END";
      break;
    case 35:
      result = "TERNOP_COND";
      break;
    case 36:
      result = "TERNOP_SLICE";
      break;
    case 37:
      result = "MULTI_SUBSCRIPT";
      break;
    case 38:
      result = "OP_LONG";
      break;
    case 39:
      result = "OP_FLOAT";
      break;
    case 40:
      result = "OP_VAR_VALUE";
      break;
    case 41:
      result = "OP_VAR_ENTRY_VALUE";
      break;
    case 42:
      result = "OP_VAR_MSYM_VALUE";
      break;
    case 43:
      result = "OP_LAST";
      break;
    case 44:
      result = "OP_REGISTER";
      break;
    case 45:
      result = "OP_INTERNALVAR";
      break;
    case 46:
      result = "OP_FUNCALL";
      break;
    case 47:
      result = "OP_OBJC_MSGCALL";
      break;
    case 48:
      result = "OP_F77_UNDETERMINED_ARGLIST";
      break;
    case 49:
      result = "OP_COMPLEX";
      break;
    case 50:
      result = "OP_STRING";
      break;
    case 51:
      result = "OP_ARRAY";
      break;
    case 52:
      result = "UNOP_CAST";
      break;
    case 53:
      result = "UNOP_CAST_TYPE";
      break;
    case 54:
      result = "UNOP_DYNAMIC_CAST";
      break;
    case 55:
      result = "UNOP_REINTERPRET_CAST";
      break;
    case 56:
      result = "UNOP_MEMVAL";
      break;
    case 57:
      result = "UNOP_MEMVAL_TYPE";
      break;
    case 58:
      result = "UNOP_NEG";
      break;
    case 59:
      result = "UNOP_LOGICAL_NOT";
      break;
    case 60:
      result = "UNOP_COMPLEMENT";
      break;
    case 61:
      result = "UNOP_IND";
      break;
    case 62:
      result = "UNOP_ADDR";
      break;
    case 63:
      result = "UNOP_PREINCREMENT";
      break;
    case 64:
      result = "UNOP_POSTINCREMENT";
      break;
    case 65:
      result = "UNOP_PREDECREMENT";
      break;
    case 66:
      result = "UNOP_POSTDECREMENT";
      break;
    case 67:
      result = "UNOP_SIZEOF";
      break;
    case 68:
      result = "UNOP_PLUS";
      break;
    case 69:
      result = "UNOP_CAP";
      break;
    case 70:
      result = "UNOP_CHR";
      break;
    case 71:
      result = "UNOP_ORD";
      break;
    case 72:
      result = "UNOP_ABS";
      break;
    case 73:
      result = "UNOP_FLOAT";
      break;
    case 74:
      result = "UNOP_HIGH";
      break;
    case 75:
      result = "UNOP_MAX";
      break;
    case 76:
      result = "UNOP_MIN";
      break;
    case 77:
      result = "UNOP_ODD";
      break;
    case 78:
      result = "UNOP_TRUNC";
      break;
    case 79:
      result = "OP_BOOL";
      break;
    case 80:
      result = "OP_M2_STRING";
      break;
    case 81:
      result = "STRUCTOP_STRUCT";
      break;
    case 82:
      result = "STRUCTOP_PTR";
      break;
    case 83:
      result = "STRUCTOP_ANONYMOUS";
      break;
    case 84:
      result = "OP_THIS";
      break;
    case 85:
      result = "OP_OBJC_SELECTOR";
      break;
    case 86:
      result = "OP_SCOPE";
      break;
    case 87:
      result = "OP_FUNC_STATIC_VAR";
      break;
    case 88:
      result = "OP_TYPE";
      break;
    case 89:
      result = "OP_NAME";
      break;
    case 90:
      result = "OP_OBJC_NSSTRING";
      break;
    case 91:
      result = "OP_RANGE";
      break;
    case 92:
      result = "OP_ADL_FUNC";
      break;
    case 93:
      result = "OP_TYPEOF";
      break;
    case 94:
      result = "OP_DECLTYPE";
      break;
    case 95:
      result = "OP_TYPEID";
      break;
    case 96:
      result = "OP_RUST_ARRAY";
      break;
    default:
      sub_93170(byte_4876A8, 0x1Eu, "<unknown %d>", a1);
      result = byte_4876A8;
      break;
  }
  return result;
}
