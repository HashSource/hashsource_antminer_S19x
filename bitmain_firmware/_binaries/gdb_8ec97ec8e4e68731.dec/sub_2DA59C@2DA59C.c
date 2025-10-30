char *__fastcall sub_2DA59C(int a1, void *a2, _DWORD *a3, char *a4)
{
  int v5; // r3
  char v9; // lr
  char v10; // r12
  char v11; // r10
  char v12; // r2
  void (__fastcall *v13)(int, _BYTE *); // r3
  int v14; // r0
  size_t v16; // lr
  _BYTE src[4]; // [sp+10h] [bp-80h] BYREF
  _BYTE v18[4]; // [sp+14h] [bp-7Ch] BYREF
  _BYTE v19[2]; // [sp+18h] [bp-78h] BYREF
  _BYTE v20[2]; // [sp+1Ah] [bp-76h] BYREF
  _BYTE v21[4]; // [sp+1Ch] [bp-74h] BYREF
  _BYTE v22[4]; // [sp+20h] [bp-70h] BYREF
  _BYTE v23[4]; // [sp+24h] [bp-6Ch] BYREF
  _BYTE v24[4]; // [sp+28h] [bp-68h] BYREF
  char v25[4]; // [sp+2Ch] [bp-64h] BYREF
  char dest[12]; // [sp+30h] [bp-60h] BYREF
  char v27[4]; // [sp+3Ch] [bp-54h] BYREF
  char v28[80]; // [sp+40h] [bp-50h] BYREF

  v5 = *(_DWORD *)(a1 + 4);
  v9 = *a4;
  v10 = a4[2];
  v11 = *(_BYTE *)(*(_DWORD *)(v5 + 444) + 467);
  v12 = a4[3];
  v13 = *(void (__fastcall **)(int, _BYTE *))(v5 + 48);
  v14 = *((_DWORD *)a4 + 1);
  src[1] = a4[1];
  src[0] = v9;
  src[2] = v10;
  src[3] = v12;
  v13(v14, v18);
  if ( (v11 & 0x10) != 0 )
  {
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 60))(*((_DWORD *)a4 + 2), v19);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 60))(*((_DWORD *)a4 + 3), v20);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*((_DWORD *)a4 + 4), v21);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*((_DWORD *)a4 + 5), v22);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*((_DWORD *)a4 + 6), v23);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*((_DWORD *)a4 + 7), v24);
    strncpy(v25, a4 + 32, 0x10u);
    strncpy(v27, a4 + 49, 0x50u);
    v16 = 124;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*((_DWORD *)a4 + 2), v19);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*((_DWORD *)a4 + 3), v21);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*((_DWORD *)a4 + 4), v22);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*((_DWORD *)a4 + 5), v23);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*((_DWORD *)a4 + 6), v24);
    (*(void (__fastcall **)(_DWORD, char *))(*(_DWORD *)(a1 + 4) + 48))(*((_DWORD *)a4 + 7), v25);
    strncpy(dest, a4 + 32, 0x10u);
    strncpy(v28, a4 + 49, 0x50u);
    v16 = 128;
  }
  return sub_2DA3B0(a1, a2, a3, "CORE", 3, src, v16);
}
