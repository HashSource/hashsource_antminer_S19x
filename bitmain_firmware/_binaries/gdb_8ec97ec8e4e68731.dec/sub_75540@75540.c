int __fastcall sub_75540(int result, int a2, int a3, const void *a4, size_t n, int a6, int a7)
{
  int v7; // r5
  const char *v8; // r6
  const char *v9; // r3
  const char *v10; // r0
  const char *v11; // r4
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r4
  const char *v16; // r0
  _BYTE _8[7]; // [sp+8h] [bp-14h] BYREF
  int varg_r2; // [sp+20h] [bp+4h]
  const void *varg_r3; // [sp+24h] [bp+8h]

  v7 = result;
  varg_r2 = a3;
  varg_r3 = a4;
  switch ( a2 )
  {
    case 258:
      v11 = *(const char **)(*(_DWORD *)(n + 24) + 8);
      if ( !v11 )
        v11 = "<unnamed type>";
      v12 = (const char *)sub_98880(varg_r2, varg_r3);
      result = sub_1C4D40(v7, "typed_val_int<%s, %s>", v11, v12);
      break;
    case 260:
    case 263:
      v13 = (const char *)memcpy(_8, varg_r3, n);
      _8[n] = 0;
      result = sub_1C4D40(v7, "tsval<type=%d, %s>", varg_r2, v13);
      break;
    case 261:
    case 298:
      v14 = (const char *)sub_1C3E58(varg_r2, varg_r3);
      result = sub_1C4D40(v7, "sval<%s>", v14);
      break;
    case 264:
    case 265:
    case 270:
    case 317:
      v8 = (const char *)sub_1C3E58(varg_r2, varg_r3);
      if ( n )
      {
        if ( dword_46D448 )
          v9 = (const char *)sub_21B3C4(n);
        else
          v9 = *(const char **)n;
      }
      else
      {
        v9 = "(null)";
      }
      result = sub_1C4D40(v7, "ssym<name=%s, sym=%s, field_of_this=%d>", v8, v9, a7);
      break;
    case 267:
      v15 = *(const char **)(*(_DWORD *)(n + 24) + 8);
      if ( !v15 )
        v15 = "<unnamed type>";
      v16 = (const char *)sub_1C3E58(varg_r2, varg_r3);
      result = sub_1C4D40(v7, "tsym<type=%s, name=%s>", v15, v16);
      break;
    case 318:
      v10 = (const char *)sub_98EEC(varg_r2);
      result = sub_1C4D40(v7, "bval<%s>", v10);
      break;
    default:
      return result;
  }
  return result;
}
