void __fastcall sub_1BED38(int a1, int a2, _DWORD *a3, const char *a4)
{
  int v5; // r3
  int v6; // r7
  size_t v8; // r0
  _DWORD *v9; // r4
  _DWORD *v10; // r3
  _DWORD *v11; // r12
  _DWORD *v12; // r3
  _DWORD *v13; // r2
  _DWORD *v14; // r1
  int v15; // r2
  int v16; // r0
  bool v17; // zf
  int v18; // r3
  _DWORD *v19; // r2
  _DWORD *v20; // r0
  int v21; // lr
  int v22; // r0
  int v23; // r2
  _DWORD *v24; // [sp+4h] [bp-1Ch] BYREF
  void *ptr; // [sp+8h] [bp-18h] BYREF
  _DWORD *v26; // [sp+Ch] [bp-14h]
  _DWORD v27[4]; // [sp+10h] [bp-10h] BYREF

  v17 = a4 == 0;
  v5 = *a3;
  ptr = v27;
  v6 = *(_DWORD *)(v5 + 28);
  if ( v17 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  v8 = strlen(a4);
  v9 = (_DWORD *)v8;
  v24 = (_DWORD *)v8;
  if ( v8 > 0xF )
  {
    v20 = (_DWORD *)sub_33B2BC(&ptr, &v24, 0);
    ptr = v20;
    v27[0] = v24;
LABEL_27:
    memcpy(v20, a4, (size_t)v9);
    v9 = v24;
    v10 = ptr;
    goto LABEL_5;
  }
  if ( v8 == 1 )
  {
    v10 = v27;
    LOBYTE(v27[0]) = *a4;
    goto LABEL_5;
  }
  if ( v8 )
  {
    v20 = v27;
    goto LABEL_27;
  }
  v10 = v27;
LABEL_5:
  v26 = v9;
  *((_BYTE *)v9 + (_DWORD)v10) = 0;
  v11 = *(_DWORD **)(v6 - 8);
  if ( v11 == *(_DWORD **)(v6 - 4) )
  {
    sub_1BF270(v6 - 12, *(_DWORD *)(v6 - 8), a3 + 1, &ptr);
  }
  else
  {
    if ( v11 )
    {
      v12 = a3 + 3;
      *v11 = v11 + 2;
      v13 = (_DWORD *)a3[1];
      if ( v13 == a3 + 3 )
      {
        v9 = (_DWORD *)*v12;
        v21 = a3[4];
        v22 = a3[5];
        v23 = a3[6];
        v11[2] = *v12;
        v11[3] = v21;
        v11[4] = v22;
        v11[5] = v23;
      }
      else
      {
        *v11 = v13;
        v11[2] = a3[3];
      }
      v14 = ptr;
      v15 = 0;
      v16 = a3[2];
      ptr = v27;
      v17 = v14 == v27;
      if ( v14 == v27 )
        v9 = v27;
      v11[1] = v16;
      a3[1] = v12;
      *((_BYTE *)a3 + 12) = 0;
      a3[2] = 0;
      v11[6] = v11 + 8;
      if ( v14 == v27 )
      {
        v16 = *v9;
        v14 = (_DWORD *)v9[1];
        v15 = v9[2];
        v18 = v9[3];
      }
      else
      {
        v18 = v27[0];
        v11[6] = v14;
      }
      if ( v17 )
        v11[10] = v15;
      v19 = v26;
      if ( v17 )
        v11[11] = v18;
      else
        v11[8] = v18;
      if ( v17 )
      {
        v11[8] = v16;
        v11[9] = v14;
      }
      LOBYTE(v27[0]) = 0;
      v11[7] = v19;
      v11 = *(_DWORD **)(v6 - 8);
      v26 = 0;
    }
    *(_DWORD *)(v6 - 8) = v11 + 12;
  }
  if ( ptr != v27 )
    sub_339E64(ptr);
}
