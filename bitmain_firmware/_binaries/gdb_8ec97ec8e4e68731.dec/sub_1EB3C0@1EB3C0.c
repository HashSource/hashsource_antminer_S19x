int __fastcall sub_1EB3C0(int a1, _BYTE *a2, unsigned __int64 a3, int a4, _QWORD *a5)
{
  int v8; // r0
  int v9; // r6
  int v10; // r4
  int v11; // r0
  int v12; // r0
  unsigned __int64 v13; // r0
  int v14; // r0
  char *v15; // r5
  int v16; // r0
  unsigned __int8 *v17; // r5
  _BYTE *v18; // r0
  int v19; // r0
  int v21; // [sp+8h] [bp-Ch]

  v8 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v8);
  v9 = dword_488C94;
  v10 = sub_1E3454(&dword_46DB18, &dword_46DB1C);
  v11 = sub_1E2890(v10);
  if ( v10 > v11 )
    v10 = sub_1E2890(v11);
  v12 = sub_347690(v10);
  HIDWORD(v13) = (unsigned int)(v12 >> 31) >> 1;
  LODWORD(v13) = (unsigned __int64)v12 >> 1;
  v21 = v13;
  if ( v13 > a3 )
    v21 = a3;
  v14 = sub_1E1C80(a1);
  v15 = *(char **)v9;
  *v15++ = 109;
  v16 = sub_1E0F74((int)v15, (unsigned int)v14);
  v15[v16] = 44;
  v15[v16 + 1 + sub_1E0F74((int)&v15[v16 + 1], v21)] = 0;
  sub_1E7DEC(*(const char **)v9);
  sub_1E4EB8((char **)v9, (size_t *)(v9 + 4), 0, 0, 0);
  v17 = *(unsigned __int8 **)v9;
  if ( **(_BYTE **)v9 == 69 && isxdigit(v17[1]) && isxdigit(v17[2]) && !v17[3] )
    return -1;
  v18 = sub_991F8(v17, a2, v21 * a4);
  v19 = sub_347690(v18);
  *a5 = v19;
  return v19 != 0;
}
