int __fastcall sub_103B1C(_DWORD *a1, int a2, const char *a3, int a4)
{
  int v8; // r0
  int result; // r0
  int v10; // r6
  char *v11; // r9
  int v12; // r1
  size_t v13; // r0
  __int64 v14; // r0
  char v15[4]; // [sp+8h] [bp-34h] BYREF
  size_t v16; // [sp+Ch] [bp-30h]
  _DWORD v17[3]; // [sp+10h] [bp-2Ch] BYREF

  v8 = sub_171258(a2);
  switch ( **(_BYTE **)(v8 + 24) )
  {
    case 3:
    case 4:
    case 5:
    case 0x1A:
      v10 = v8;
      v11 = (char *)sub_172254(a2);
      sub_10414C((int)v17, v11, (int)a3, a4, 1, 0);
      if ( !v17[0] )
      {
        v16 = strlen(v11);
        v13 = strlen(a3);
        sub_93170(v15, v16 + v13 + 2, "%s.%s", v11, a3);
        sub_21D0BC(v17, v15, 1);
        if ( !v17[0] )
        {
          sub_104208(a1, v10 + 24, a3, a4);
          goto LABEL_3;
        }
      }
      v12 = v17[1];
      *a1 = v17[0];
      a1[1] = v12;
      result = (int)a1;
      break;
    case 7:
    case 0xF:
      *a1 = 0;
      a1[1] = 0;
LABEL_3:
      result = (int)a1;
      break;
    default:
      v14 = sub_94700(
              (int)"d-namespace.c",
              355,
              "%s: %s",
              "block_symbol d_lookup_nested_symbol(type*, const char*, const block*)",
              "called with non-aggregate type.");
      result = sub_103CD4(v14, HIDWORD(v14));
      break;
  }
  return result;
}
