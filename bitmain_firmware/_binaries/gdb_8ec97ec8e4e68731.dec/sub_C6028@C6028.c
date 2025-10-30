void __fastcall sub_C6028(int a1, char *a2, char *a3)
{
  char *v3; // r3
  char *v4; // r8
  _BYTE *v5; // r0
  _BYTE *v6; // r6
  _BYTE *v7; // r5
  _BYTE *v8; // r4
  int v9; // r9
  void *v10; // r4
  void *v11; // r7
  _DWORD *v12; // r4
  int v13; // r0
  _QWORD *v14; // r2
  _BYTE *v15; // r3
  __int64 v16; // r0
  int v17; // r2
  void *v18; // r6
  size_t v19; // r4
  char *v20; // r3
  char *v21; // r0
  char *v23; // [sp+Ch] [bp-28h] BYREF
  _DWORD *v24; // [sp+14h] [bp-20h] BYREF
  void *ptr; // [sp+18h] [bp-1Ch] BYREF
  _QWORD v26[2]; // [sp+1Ch] [bp-18h] BYREF

  v3 = a2;
  v4 = a3;
  if ( !a2 )
  {
    a3 = "";
    v3 = "";
  }
  v23 = a2;
  if ( !a2 )
    v23 = a3;
  v23 = (char *)sub_9360C(v3);
  v5 = (_BYTE *)sub_9360C(v23);
  v6 = v5;
  if ( *v5 )
  {
    v7 = v5;
    v8 = v5;
    do
    {
      ptr = v8;
      if ( sub_5B24C((const char **)&ptr, "if", 2u) )
        break;
      v7 = sub_93610(v8);
      v8 = (_BYTE *)sub_9360C(v7);
    }
    while ( *v8 );
    v23 = v8;
    if ( v6 >= v7 )
      goto LABEL_10;
    v19 = v7 - v6;
    v24 = (_DWORD *)(v7 - v6);
    ptr = (char *)v26 + 4;
    if ( (unsigned int)(v7 - v6) > 0xF )
    {
      v21 = (char *)sub_33B2BC(&ptr, &v24, 0);
      ptr = v21;
      HIDWORD(v26[0]) = v24;
    }
    else
    {
      if ( v19 == 1 )
      {
        v20 = (char *)v26 + 4;
        BYTE4(v26[0]) = *v6;
LABEL_30:
        LODWORD(v26[0]) = v19;
        v20[v19] = 0;
        goto LABEL_11;
      }
      if ( !v19 )
      {
        v20 = (char *)v26 + 4;
        goto LABEL_30;
      }
      v21 = (char *)v26 + 4;
    }
    memcpy(v21, v6, v19);
    v19 = (size_t)v24;
    v20 = (char *)ptr;
    goto LABEL_30;
  }
  v23 = v5;
LABEL_10:
  ptr = (char *)v26 + 4;
  LODWORD(v26[0]) = 0;
  BYTE4(v26[0]) = 0;
LABEL_11:
  v9 = sub_D0C88(&v23);
  if ( *v23 && !isspace((unsigned __int8)*v23) )
    sub_946E0("Junk at end of arguments.");
  if ( LODWORD(v26[0]) )
  {
    v10 = ptr;
    v11 = sub_9836C(0x20u);
    sub_1636B8(v11, v10, 8, "invalid type-matching regexp");
    v12 = sub_9836C(0xA8u);
  }
  else
  {
    v12 = sub_9836C(0xA8u);
    v11 = 0;
  }
  memset(v12, 0, 0xA8u);
  v12[4] = 1;
  *((_BYTE *)v12 + 32) = 0;
  *((_BYTE *)v12 + 33) = 0;
  v12[13] = 0;
  v12[14] = 0;
  v12[15] = 0;
  v12[16] = 0;
  v12[17] = 0;
  v12[28] = -1;
  *v12 = off_37D4F4;
  *((_BYTE *)v12 + 148) = 0;
  v12[35] = v12 + 37;
  v13 = sub_B894C(0);
  sub_D0244(v12, v13, v4, v9, &unk_478300);
  v14 = ptr;
  v12[3] = 1;
  v12[34] = a1;
  v15 = (_BYTE *)v12[35];
  if ( v14 == (_QWORD *)((char *)v26 + 4) )
  {
    sub_33B48C(v12 + 35, &ptr);
    v15 = ptr;
  }
  else
  {
    v16 = v26[0];
    if ( v12 + 37 == (_DWORD *)v15 )
    {
      v12[35] = v14;
      *((_QWORD *)v12 + 18) = v16;
    }
    else
    {
      v12[35] = v14;
      v12[36] = v16;
      v17 = v12[37];
      v12[37] = HIDWORD(v16);
      if ( v15 )
      {
        ptr = v15;
        HIDWORD(v26[0]) = v17;
        goto LABEL_19;
      }
    }
    ptr = (char *)v26 + 4;
    v15 = (char *)v26 + 4;
  }
LABEL_19:
  LODWORD(v26[0]) = 0;
  *v15 = 0;
  v18 = (void *)v12[41];
  v12[41] = v11;
  if ( v18 )
  {
    sub_16373C(v18);
    sub_33AC04(v18);
  }
  sub_C5D74((int)v12);
  v24 = v12;
  sub_D9044(0, &v24, 1);
  if ( v24 )
    (*(void (__fastcall **)(_DWORD *))(*v24 + 4))(v24);
  if ( ptr != (char *)v26 + 4 )
    sub_339E64(ptr);
}
