_DWORD *__fastcall sub_238864(_DWORD *result, int a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r6
  int v5; // r7
  void *v6; // r8
  int *v8; // r3
  int *v9; // r1
  int *v10; // r3
  int v11; // r2
  bool v12; // zf
  _DWORD *v13; // r1
  __int64 v14; // r0
  char *v15; // r2
  int v16; // lr
  char *v17; // r5
  _DWORD *v18; // r4
  int v19; // r7
  _DWORD *v20; // r6
  int v21; // r2
  int v22; // r2
  _BYTE *v23; // r3
  void *v24; // r2
  void *v25; // r0
  char *v26; // [sp+8h] [bp-5Ch] BYREF
  char *s; // [sp+Ch] [bp-58h] BYREF
  void *ptr[2]; // [sp+10h] [bp-54h] BYREF
  _BYTE v29[16]; // [sp+18h] [bp-4Ch] BYREF
  void *v30[2]; // [sp+28h] [bp-3Ch] BYREF
  _BYTE v31[16]; // [sp+30h] [bp-34h] BYREF
  int v32; // [sp+40h] [bp-24h]
  int v33; // [sp+44h] [bp-20h]
  int v34; // [sp+48h] [bp-1Ch]
  int v35; // [sp+4Ch] [bp-18h]
  void *v36; // [sp+50h] [bp-14h]
  int v37; // [sp+54h] [bp-10h]
  int v38; // [sp+5Ch] [bp-8h]

  v38 = a2;
  if ( !a2 )
    return result;
  v8 = (int *)result[3];
  v9 = (int *)result[4];
  if ( v8 != v9 )
  {
    if ( a2 != *v8 )
    {
      v10 = v8 + 1;
      while ( v10 != v9 )
      {
        v11 = *v10++;
        if ( a2 == v11 )
          goto LABEL_14;
      }
      goto LABEL_8;
    }
LABEL_14:
    v14 = sub_94700(
            (int)"target-descriptions.c",
            1644,
            "Attempted to add duplicate compatible architecture \"%s\"",
            (const char *)*(_DWORD *)(a2 + 24));
    v32 = v2;
    v33 = v3;
    v34 = v4;
    v35 = v5;
    v36 = v6;
    v37 = v16;
    v17 = (char *)HIDWORD(v14);
    s = (char *)HIDWORD(v14);
    v26 = v15;
    if ( HIDWORD(v14) && v15 )
    {
      v18 = *(_DWORD **)(v14 + 24);
      v19 = v14;
      v20 = *(_DWORD **)(v14 + 28);
      if ( v18 == v20 )
      {
        if ( v18 != *(_DWORD **)(v14 + 32) )
        {
          v30[0] = v31;
          goto LABEL_24;
        }
        goto LABEL_37;
      }
      while ( sub_33CAA0((int)v18, v17) )
      {
        v18 += 12;
        if ( v20 == v18 )
          goto LABEL_21;
      }
      if ( !v18[6] )
      {
LABEL_21:
        v18 = *(_DWORD **)(v19 + 28);
        if ( v18 != *(_DWORD **)(v19 + 32) )
        {
          v17 = s;
          v30[0] = v31;
          if ( !s )
          {
            v21 = -1;
            goto LABEL_25;
          }
LABEL_24:
          v21 = (int)&v17[strlen(v17)];
LABEL_25:
          sub_2350F8(v30, v17, v21);
          ptr[0] = v29;
          if ( v26 )
            v22 = (int)&v26[strlen(v26)];
          else
            v22 = -1;
          sub_2350F8(ptr, v26, v22);
          if ( v18 )
          {
            *v18 = v18 + 2;
            sub_2350F8(v18, (_BYTE *)v30[0], (int)v30[0] + (unsigned int)v30[1]);
            v23 = ptr[0];
            v24 = ptr[1];
            v18[6] = v18 + 8;
            sub_2350F8(v18 + 6, v23, (int)v24 + (_DWORD)v23);
          }
          if ( ptr[0] != v29 )
            sub_339E64(ptr[0]);
          if ( v30[0] != v31 )
            sub_339E64(v30[0]);
          *(_DWORD *)(v19 + 28) += 48;
          __asm { POP             {R4-R8,PC} }
        }
LABEL_37:
        sub_23C554(v19 + 24, v18, &s, &v26);
        __asm { POP             {R4-R8,PC} }
      }
      sub_94700((int)"target-descriptions.c", 1659, "Attempted to add duplicate property \"%s\"", s);
    }
    sub_94700(
      (int)"target-descriptions.c",
      1656,
      "%s: Assertion `%s' failed.",
      "void set_tdesc_property(target_desc*, const char*, const char*)",
      "key != NULL && value != NULL");
    v25 = v30[0];
    if ( v30[0] != v6 )
      sub_339E64(v30[0]);
    sub_338FFC(v25);
  }
LABEL_8:
  if ( v9 == (int *)result[5] )
    return (_DWORD *)sub_23C464(result + 3);
  v12 = v9 == 0;
  v13 = v9 + 1;
  if ( !v12 )
    *(v13 - 1) = a2;
  result[4] = v13;
  return result;
}
