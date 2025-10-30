void __fastcall sub_93E78(int a1, char *a2, int a3)
{
  int v5; // r3
  char *v6; // r1
  char *v7; // r8
  size_t v8; // r0
  size_t v9; // r6
  _DWORD *v10; // r3
  size_t v11; // r0
  size_t v12; // r6
  _DWORD *v13; // r3
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  char *s; // [sp+4h] [bp-28h] BYREF
  _DWORD v17[2]; // [sp+8h] [bp-24h] BYREF
  void *ptr; // [sp+10h] [bp-1Ch] BYREF
  char *v19; // [sp+14h] [bp-18h] BYREF
  _DWORD v20[4]; // [sp+18h] [bp-14h] BYREF

  s = (char *)sub_31E27C(a2, &word_3FDE24, a3);
  sub_93C28(a1, a2, 0);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = (char *)(v5 - 4);
  if ( v5 == *(_DWORD *)(a1 + 8) )
  {
    sub_940D0(a1, v6, &s);
  }
  else
  {
    ptr = (void *)a1;
    v19 = s;
    sub_937E4((_DWORD **)(a1 + 4), v6, &v19);
  }
  v7 = s;
  ptr = v20;
  if ( !s )
    goto LABEL_25;
  v8 = strlen(s);
  v9 = v8;
  v17[0] = v8;
  if ( v8 > 0xF )
  {
    v14 = (_DWORD *)sub_33B2BC(&ptr, v17, 0);
    ptr = v14;
    v20[0] = v17[0];
LABEL_17:
    memcpy(v14, v7, v9);
    v9 = v17[0];
    v10 = ptr;
    goto LABEL_7;
  }
  if ( v8 == 1 )
  {
    v10 = v20;
    LOBYTE(v20[0]) = *s;
    goto LABEL_7;
  }
  if ( v8 )
  {
    v14 = v20;
    goto LABEL_17;
  }
  v10 = v20;
LABEL_7:
  v19 = (char *)v9;
  *((_BYTE *)v10 + v9) = 0;
  sub_941F8(v17, a1 + 12, &ptr);
  if ( ptr != v20 )
    sub_339E64(ptr);
  ptr = v20;
  if ( !a2 )
LABEL_25:
    sub_33D0B8("basic_string::_M_construct null not valid");
  v11 = strlen(a2);
  v12 = v11;
  v17[0] = v11;
  if ( v11 > 0xF )
  {
    v15 = (_DWORD *)sub_33B2BC(&ptr, v17, 0);
    ptr = v15;
    v20[0] = v17[0];
LABEL_19:
    memcpy(v15, a2, v12);
    v12 = v17[0];
    v13 = ptr;
    goto LABEL_13;
  }
  if ( v11 == 1 )
  {
    v13 = v20;
    LOBYTE(v20[0]) = *a2;
    goto LABEL_13;
  }
  if ( v11 )
  {
    v15 = v20;
    goto LABEL_19;
  }
  v13 = v20;
LABEL_13:
  v19 = (char *)v12;
  *((_BYTE *)v13 + v12) = 0;
  sub_94430(a1 + 36, &ptr);
  if ( ptr != v20 )
    sub_339E64(ptr);
}
