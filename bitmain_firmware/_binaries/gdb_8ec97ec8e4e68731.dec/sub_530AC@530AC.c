int __fastcall sub_530AC(
        char *a1,
        int a2,
        char a3,
        int a4,
        const char *a5,
        const char *a6,
        const char *a7,
        int a8,
        int a9,
        int **a10,
        int **a11,
        int *a12)
{
  int v16; // r6
  int v17; // r11
  int v18; // r0
  char v19; // r5
  __int16 v20; // r3
  char v21; // r2
  int v22; // r3
  int v23; // r4
  int result; // r0
  __int16 v25; // r3
  __int16 v26; // r3
  char v27; // r2
  int *v28; // r3
  char v29; // r2

  if ( a7 )
  {
    v16 = sub_93140("%s\n%s", a5, a7);
    v17 = sub_93140("%s\n%s", a6, a7);
  }
  else
  {
    v16 = sub_327254(a5);
    v17 = sub_327254(a6);
  }
  v18 = sub_52DB8(a1, a2, v16, a10);
  v19 = a3 & 0xF;
  v20 = *(_WORD *)(v18 + 12) & 0xFE7F | 0x80;
  v21 = HIBYTE(v20);
  *(_DWORD *)(v18 + 76) = a4;
  v22 = (unsigned __int8)v20 | 8;
  *(_BYTE *)(v18 + 13) = v21 & 0xE1 | (2 * (v19 & 0xF));
  *(_BYTE *)(v18 + 12) = v22;
  v23 = v18;
  if ( a8 )
    v22 = a8;
  *(_DWORD *)(v18 + 20) = nullsub_40;
  *(_DWORD *)(v18 + 16) = sub_52C54;
  if ( a8 )
    *(_DWORD *)(v18 + 20) = v22;
  sub_52F2C(v18, a10);
  result = sub_52DB8(a1, a2, v17, a11);
  v25 = *(_WORD *)(result + 12);
  *(_DWORD *)(result + 76) = a4;
  v26 = v25 & 0xFE7F | 0x100;
  *(_DWORD *)(result + 16) = sub_52C54;
  v27 = v26;
  v28 = (int *)(HIBYTE(v26) & 0xE1 | (2 * (v19 & 0xF)));
  v29 = v27 | 8;
  *(_BYTE *)(result + 13) = (_BYTE)v28;
  if ( a12 )
    v28 = a12;
  *(_DWORD *)(result + 20) = nullsub_40;
  *(_DWORD *)(result + 32) = a9;
  *(_BYTE *)(result + 12) = v29;
  if ( a12 )
    *v28 = v23;
  return result;
}
