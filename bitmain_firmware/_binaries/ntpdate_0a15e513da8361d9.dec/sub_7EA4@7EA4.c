int __fastcall sub_7EA4(int a1, __int16 a2, __int16 a3, int a4, int a5, int a6, int a7)
{
  int v7; // r9
  int v9; // r12
  int v10; // r7
  int v11; // r5
  int v12; // r12
  int result; // r0
  bool v14; // zf
  int v15; // r10
  int v16; // r1
  int v17; // lr
  __int16 v18; // [sp+Ch] [bp-18h]
  __int16 v19; // [sp+10h] [bp-14h]
  int v20; // [sp+14h] [bp-10h]

  v9 = authnumfreekeys;
  v10 = key_hash;
  v11 = (unsigned __int16)(authhashmask & a1);
  if ( authnumfreekeys <= 0 )
  {
    v20 = a4;
    v19 = a3;
    v18 = a2;
    sub_7DE0(-1);
    v9 = authnumfreekeys;
    a2 = v18;
    a3 = v19;
    a4 = v20;
  }
  v12 = v9 - 1;
  result = authfreekeys;
  v14 = authfreekeys == 0;
  *(_DWORD *)(authfreekeys + 12) = a6;
  if ( !v14 )
    v7 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 16) = a7;
  if ( !v14 )
    authfreekeys = v7;
  v15 = *(_DWORD *)(v10 + 4 * v11);
  *(_WORD *)(result + 28) = a3;
  *(_DWORD *)result = v15;
  *(_WORD *)(result + 36) = a2;
  *(_DWORD *)(result + 32) = a5;
  *(_DWORD *)(result + 24) = a1;
  *(_DWORD *)(result + 20) = a4;
  *(_DWORD *)(v10 + 4 * v11) = result;
  authnumfreekeys = v12;
  v16 = dword_33458;
  *(_DWORD *)(result + 8) = &key_listhead;
  *(_DWORD *)(result + 4) = v16;
  v17 = dword_33458;
  dword_33458 = result;
  *(_DWORD *)(v17 + 8) = result;
  ++authnumkeys;
  return result;
}
