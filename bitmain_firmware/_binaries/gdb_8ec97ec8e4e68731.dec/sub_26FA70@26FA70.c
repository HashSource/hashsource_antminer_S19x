int __fastcall sub_26FA70(_DWORD *a1)
{
  _BYTE *v2; // r7
  int v3; // r1
  int v4; // r5
  int v5; // r12
  int v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r2
  int v9; // t1
  _DWORD *v10; // r4
  size_t v11; // r8
  _DWORD *v12; // r0
  int v13; // r2
  int v14; // r3
  _DWORD *v15; // r12
  int v16; // r1
  int v17; // r3

  v2 = (_BYTE *)a1[12];
  v3 = (unsigned __int8)*v2;
  if ( *v2 )
  {
    v5 = a1[12];
    v6 = 1;
    v7 = 0;
    do
    {
      v8 = v7 + v6 * v3;
      v9 = *(unsigned __int8 *)++v5;
      v3 = v9;
      ++v6;
      v7 = v8 % 0xE3;
    }
    while ( v9 );
    v4 = 4 * v7;
  }
  else
  {
    v4 = (unsigned __int8)*v2;
  }
  v10 = *(_DWORD **)(dword_48AA14 + v4);
  if ( v10 )
  {
    v11 = a1[13];
    do
    {
      if ( *(_DWORD *)(*v10 + 52) == v11 && (!v11 || !memcmp(*(const void **)(*v10 + 48), v2, v11)) )
        sub_946E0("Duplicate variable object name");
      v10 = (_DWORD *)v10[1];
    }
    while ( v10 );
  }
  v12 = sub_93028(8u);
  v13 = a1[26];
  v14 = dword_48AA14;
  v15 = *(_DWORD **)(v13 + 40);
  v16 = *(_DWORD *)(dword_48AA14 + v4);
  *v12 = a1;
  v12[1] = v16;
  *(_DWORD *)(v14 + v4) = v12;
  if ( a1 == v15 )
  {
    v17 = dword_48AA18;
    dword_48AA18 = v13;
    *(_DWORD *)(v13 + 44) = v17;
  }
  return 1;
}
