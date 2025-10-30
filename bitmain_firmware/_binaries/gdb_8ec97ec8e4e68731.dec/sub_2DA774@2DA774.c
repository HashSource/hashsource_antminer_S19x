char *__fastcall sub_2DA774(int a1, void *a2, _DWORD *a3, int a4)
{
  int v5; // r3
  int v9; // r1
  char v10; // r2
  void (__fastcall *v11)(int, _DWORD, _BYTE *); // r3
  char v12; // lr
  char v13; // r12
  int v14; // r1
  int v15; // r0
  size_t v16; // lr
  _BYTE src[8]; // [sp+10h] [bp-88h] BYREF
  _BYTE v19[8]; // [sp+18h] [bp-80h] BYREF
  _BYTE v20[2]; // [sp+20h] [bp-78h] BYREF
  _BYTE v21[2]; // [sp+22h] [bp-76h] BYREF
  _BYTE v22[4]; // [sp+24h] [bp-74h] BYREF
  _BYTE v23[4]; // [sp+28h] [bp-70h] BYREF
  _BYTE v24[4]; // [sp+2Ch] [bp-6Ch] BYREF
  _BYTE v25[4]; // [sp+30h] [bp-68h] BYREF
  char v26[4]; // [sp+34h] [bp-64h] BYREF
  char dest[12]; // [sp+38h] [bp-60h] BYREF
  char v28[4]; // [sp+44h] [bp-54h] BYREF
  char v29[80]; // [sp+48h] [bp-50h] BYREF

  v5 = *(_DWORD *)(a1 + 4);
  v9 = *(_DWORD *)(v5 + 444);
  v10 = *(_BYTE *)(a4 + 1);
  v11 = *(void (__fastcall **)(int, _DWORD, _BYTE *))(v5 + 36);
  v12 = *(_BYTE *)(a4 + 2);
  v13 = *(_BYTE *)(a4 + 3);
  v14 = *(_BYTE *)(v9 + 467) & 0x20;
  v15 = *(_DWORD *)(a4 + 4);
  src[0] = *(_BYTE *)a4;
  src[1] = v10;
  src[2] = v12;
  src[3] = v13;
  if ( v14 )
  {
    v11(v15, 0, v19);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 60))(*(_DWORD *)(a4 + 8), v20);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 60))(*(_DWORD *)(a4 + 12), v21);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(a4 + 16), v22);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(a4 + 20), v23);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(a4 + 24), v24);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(a4 + 28), v25);
    strncpy(v26, (const char *)(a4 + 32), 0x10u);
    strncpy(v28, (const char *)(a4 + 49), 0x50u);
    v16 = 132;
  }
  else
  {
    v11(v15, 0, v19);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(a4 + 8), v20);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(a4 + 12), v22);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(a4 + 16), v23);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(a4 + 20), v24);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(a4 + 24), v25);
    (*(void (__fastcall **)(_DWORD, char *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(a4 + 28), v26);
    strncpy(dest, (const char *)(a4 + 32), 0x10u);
    strncpy(v29, (const char *)(a4 + 49), 0x50u);
    v16 = 136;
  }
  return sub_2DA3B0(a1, a2, a3, "CORE", 3, src, v16);
}
