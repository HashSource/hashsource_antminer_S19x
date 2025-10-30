int __fastcall sub_FD308(_DWORD *a1, int a2, const char *a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r8
  int result; // r0
  size_t v12; // r10
  size_t v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  const char *v17; // r10
  int v18; // r3
  const char *v19; // r0
  int v20; // r4
  int v21; // r6
  char *v22; // r2
  _DWORD *v23; // r0
  __int64 v24; // r0
  char *v25; // r2
  int v26; // r3
  int v27; // [sp+10h] [bp-34h] BYREF
  char *v28; // [sp+14h] [bp-30h]
  _DWORD v29[3]; // [sp+18h] [bp-2Ch] BYREF

  v9 = sub_171258(a2);
  v10 = v9;
  if ( dword_48970C )
  {
    v17 = (const char *)sub_170CC4(a2);
    v18 = *(_DWORD *)sub_242FC8(v17);
    if ( !v17 )
      v17 = "unnamed";
    v27 = v18;
    v28 = sub_98EEC(a4);
    v19 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a5);
    v9 = sub_2594B0(v27, "cp_lookup_nested_symbol (%s, %s, %s, %s)\n", v17, a3, v28, v19);
  }
  switch ( **(_BYTE **)(v10 + 24) )
  {
    case 3:
    case 4:
    case 5:
    case 0x18:
    case 0x1A:
      v28 = (char *)sub_172254(a2);
      v12 = strlen(v28);
      v13 = strlen(a3);
      sub_93170((char *)&v27, v12 + v13 + 3, "%s::%s", v28, a3);
      v14 = sub_338BD4(&v27, "(anonymous namespace)");
      v15 = sub_FCD54(v29, (int *)v10, a3, (int)&v27, a4, a5, 1, v14 != 0);
      if ( dword_48970C )
      {
        v20 = v29[0];
        v21 = *(_DWORD *)sub_242FC8(v15);
        if ( v20 )
          v22 = sub_98EEC(v20);
        else
          v22 = "NULL";
        sub_2594B0(v21, "cp_lookup_nested_symbol (...) = %s\n", v22);
      }
      v16 = v29[1];
      *a1 = v29[0];
      a1[1] = v16;
      result = (int)a1;
      break;
    case 7:
    case 0xF:
      if ( dword_48970C )
      {
        v23 = (_DWORD *)sub_242FC8(v9);
        sub_2594B0(*v23, "cp_lookup_nested_symbol (...) = NULL (func/method)\n");
      }
      *a1 = 0;
      a1[1] = 0;
      result = (int)a1;
      break;
    default:
      v24 = sub_94700((int)"cp-namespace.c", 984, "cp_lookup_nested_symbol called on a non-aggregate type.");
      result = sub_FD57C(v24, SHIDWORD(v24), v25, v26, a5);
      break;
  }
  return result;
}
