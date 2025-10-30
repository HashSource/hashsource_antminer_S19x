void __fastcall sub_222060(const char *a1)
{
  char *v1; // r5
  char *v2; // r0
  char *v3; // r8
  int v4; // r3
  const char ***v5; // r2
  __int64 v6; // r4
  _BYTE *v7; // r3
  int v8; // r2
  int *v9; // r0
  int v10; // r1
  _DWORD *v11; // r3
  int v12; // r3
  int v13; // r8
  char *v14; // r0
  _BYTE *v15; // r3
  int v16; // r2
  int v17; // r0
  int v18; // r9
  int v19; // r8
  const char *v20; // r0
  char *v21; // r1
  size_t v22; // r2
  _BYTE *v23; // r5
  int v24; // t1
  void *v25; // r0
  const char *v26; // [sp+8h] [bp-8Ch] BYREF
  const char *v27; // [sp+Ch] [bp-88h] BYREF
  const char **v28; // [sp+18h] [bp-7Ch] BYREF
  int v29[3]; // [sp+1Ch] [bp-78h] BYREF
  void *v30; // [sp+28h] [bp-6Ch] BYREF
  _QWORD v31[2]; // [sp+2Ch] [bp-68h] BYREF
  void *v32; // [sp+40h] [bp-54h] BYREF
  _QWORD v33[2]; // [sp+44h] [bp-50h] BYREF
  void *ptr; // [sp+58h] [bp-3Ch] BYREF
  _QWORD v35[3]; // [sp+5Ch] [bp-38h] BYREF

  v1 = (char *)a1;
  v30 = (char *)v31 + 4;
  LODWORD(v31[0]) = 0;
  BYTE4(v31[0]) = 0;
  if ( a1 )
  {
    v2 = strchr(a1, 58);
    v3 = v2;
    if ( v2 )
    {
      if ( v2[1] == 58 )
      {
        v4 = 0;
        v5 = 0;
      }
      else
      {
        v21 = v1;
        v22 = v2 - v1;
        v26 = (const char *)(v2 - v1);
        v27 = (const char *)(((unsigned int)&v27 + 3) >> 3);
        v23 = (char *)&v26 + v2 - v1;
        memcpy(&v26, v21, v22);
        v26[8 * (_DWORD)v27] = 0;
        while ( 1 )
        {
          v24 = (unsigned __int8)*--v23;
          if ( !isspace(v24) )
            break;
          *v23 = 0;
        }
        v28 = &v26;
        v1 = (char *)sub_9360C(v3 + 1);
        v4 = 1;
        v5 = &v28;
      }
    }
    else
    {
      v4 = 0;
      v5 = 0;
    }
  }
  else
  {
    v4 = 0;
    v5 = 0;
  }
  sub_22146C(v29, v1, 1, v4, (int)v5);
  sub_CD374();
  v6 = *(_QWORD *)v29;
  if ( v29[0] != v29[1] )
  {
    v27 = "'%s'";
    v26 = "<function, no debug info> %s;\n";
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD **)(v6 + 8);
        if ( v11 )
          break;
        v12 = *(_DWORD *)(v6 + 4);
        if ( (*(_BYTE *)(v12 + 33) & 1) == 0 )
        {
          ((void (*)(void))loc_21A4BC)();
          sub_CD388();
          if ( v29[0] )
            sub_339E64((void *)v29[0]);
          v25 = v30;
          if ( v30 != (char *)v31 + 4 )
            sub_339E64(v30);
          sub_338FFC(v25);
        }
        v13 = *(_DWORD *)(v12 + 28);
        v14 = sub_204308(v13);
        sub_931D8((char **)&v32, "%s:'%s'", v14, **(const char ***)(v6 + 4));
        v15 = v30;
        if ( v32 == (char *)v33 + 4 )
        {
          sub_33B48C(&v30, &v32);
          v15 = v32;
          goto LABEL_24;
        }
        if ( v30 == (char *)v31 + 4 )
        {
          v30 = v32;
          v31[0] = v33[0];
LABEL_35:
          v32 = (char *)v33 + 4;
          v15 = (char *)v33 + 4;
          goto LABEL_24;
        }
        v30 = v32;
        v16 = HIDWORD(v31[0]);
        v31[0] = v33[0];
        if ( !v15 )
          goto LABEL_35;
        v32 = v15;
        HIDWORD(v33[0]) = v16;
LABEL_24:
        LODWORD(v33[0]) = 0;
        *v15 = 0;
        if ( v32 != (char *)v33 + 4 )
          sub_339E64(v32);
        sub_DAB2C((int)v30);
        v17 = v13;
        v18 = *(_DWORD *)v6;
        v19 = *(_DWORD *)(v6 + 4);
        v20 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v17);
        sub_21B630(1, v19, v18, v20);
        LODWORD(v6) = v6 + 16;
        if ( HIDWORD(v6) == (_DWORD)v6 )
          goto LABEL_27;
      }
      sub_931D8((char **)&ptr, v27, *v11);
      v7 = v30;
      if ( ptr == (char *)v35 + 4 )
      {
        sub_33B48C(&v30, &ptr);
        v7 = ptr;
        goto LABEL_12;
      }
      if ( v30 == (char *)v31 + 4 )
        break;
      v30 = ptr;
      v8 = HIDWORD(v31[0]);
      v31[0] = v35[0];
      if ( !v7 )
        goto LABEL_33;
      ptr = v7;
      HIDWORD(v35[0]) = v8;
LABEL_12:
      LODWORD(v35[0]) = 0;
      *v7 = 0;
      if ( ptr != (char *)v35 + 4 )
        sub_339E64(ptr);
      sub_DAB2C((int)v30);
      v9 = *(int **)(v6 + 8);
      if ( dword_46D448 )
        v10 = sub_21B3C4((int)v9);
      else
        v10 = *v9;
      sub_259F10(v26, v10);
      LODWORD(v6) = v6 + 16;
      if ( HIDWORD(v6) == (_DWORD)v6 )
        goto LABEL_27;
    }
    v30 = ptr;
    v31[0] = v35[0];
LABEL_33:
    ptr = (char *)v35 + 4;
    v7 = (char *)v35 + 4;
    goto LABEL_12;
  }
LABEL_27:
  sub_CD388();
  if ( v29[0] )
    sub_339E64((void *)v29[0]);
  if ( v30 != (char *)v31 + 4 )
    sub_339E64(v30);
}
