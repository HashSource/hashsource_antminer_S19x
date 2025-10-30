int __fastcall sub_61C70(int a1, __int16 a2, __int16 a3, int a4, int a5, int a6, int a7)
{
  int v8; // r3
  int v9; // r12
  int v10; // r7
  int v11; // r5
  int v12; // r12
  int result; // r0
  int v14; // lr
  int v15; // r1
  int v16; // lr
  __int16 v18; // [sp+Ch] [bp-18h]
  __int16 v19; // [sp+10h] [bp-14h]

  v8 = a5;
  v9 = authnumfreekeys;
  v10 = key_hash;
  v11 = (unsigned __int16)(authhashmask & a1);
  if ( authnumfreekeys <= 0 )
  {
    v19 = a3;
    v18 = a2;
    sub_61BB0(-1);
    v9 = authnumfreekeys;
    a3 = v19;
    v8 = a5;
    a2 = v18;
  }
  v12 = v9 - 1;
  result = authfreekeys;
  if ( authfreekeys )
    authfreekeys = *(_DWORD *)(authfreekeys + 8);
  v14 = *(_DWORD *)(v10 + 4 * v11);
  *(_DWORD *)(result + 32) = v8;
  *(_DWORD *)result = v14;
  *(_WORD *)(result + 36) = a2;
  *(_WORD *)(result + 28) = a3;
  *(_DWORD *)(result + 24) = a1;
  *(_DWORD *)(result + 12) = a6;
  *(_DWORD *)(result + 16) = a7;
  *(_DWORD *)(result + 20) = a4;
  *(_DWORD *)(v10 + 4 * v11) = result;
  authnumfreekeys = v12;
  v15 = dword_108D40;
  *(_DWORD *)(result + 8) = &key_listhead;
  *(_DWORD *)(result + 4) = v15;
  v16 = dword_108D40;
  dword_108D40 = result;
  *(_DWORD *)(v16 + 8) = result;
  ++authnumkeys;
  return result;
}
