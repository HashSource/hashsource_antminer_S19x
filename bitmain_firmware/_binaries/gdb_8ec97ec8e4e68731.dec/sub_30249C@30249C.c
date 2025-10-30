int __fastcall sub_30249C(int a1, _DWORD *a2, int a3, int (__fastcall *a4)(int, int), int a5)
{
  unsigned int v5; // r12
  _BOOL4 v7; // r7
  char *v11; // r6
  char *v12; // r10
  _DWORD *v13; // r11
  int v14; // r4
  int v15; // r9
  _DWORD *v16; // r5
  int v17; // t1
  int v18; // r2
  _DWORD *v20; // r0
  int v21; // r2
  int v22; // r3
  unsigned int v23; // r4
  int v24; // r2
  _DWORD *v25; // r1
  int v26; // t1
  unsigned int v29; // [sp+8h] [bp-14h]
  _DWORD *v30; // [sp+Ch] [bp-10h]
  void *ptr; // [sp+14h] [bp-8h] BYREF

  v5 = a2[9];
  ptr = 0;
  if ( !v5 || v5 != 12 * (v5 / 0xC) )
    return 0;
  v7 = a2[15] == (_DWORD)&off_470950;
  if ( !a2[15] )
    v7 = 0;
  if ( v7 || !a3 )
    return 0;
  v29 = a2[10];
  if ( !sub_2ADFDC(a1, (int)a2, (int *)&ptr) )
  {
LABEL_27:
    if ( ptr )
      free(ptr);
    return 0;
  }
  v11 = (char *)ptr;
  v12 = (char *)ptr + a2[10];
  if ( ptr >= v12 )
  {
    free(ptr);
    if ( !a2[9] )
      a2[5] |= 0x208000u;
    return 0;
  }
  v13 = (_DWORD *)(a3 + 4);
  v30 = a2;
  v14 = 0;
  v15 = -1;
  v16 = v13;
  do
  {
    v17 = v16[1];
    ++v16;
    if ( v17 != -1 )
    {
      v18 = (unsigned __int8)v11[4];
      if ( v18 == 36 )
      {
        if ( (*(int (__fastcall **)(char *))(*(_DWORD *)(a1 + 4) + 40))(v11) )
        {
          v15 = a4(v11 + 8 - (_BYTE *)ptr, a5);
          if ( !v15 )
            goto LABEL_13;
LABEL_12:
          ++v14;
          v15 = 1;
          *v16 = -1;
          goto LABEL_13;
        }
        if ( v15 )
        {
          ++v14;
          *v16 = -1;
        }
        v15 = -1;
      }
      else
      {
        if ( v15 == 1 )
          goto LABEL_12;
        if ( v15 == -1 )
        {
          if ( (((_BYTE)v18 - 38) & 0xFD) == 0 && a4(v11 + 8 - (_BYTE *)ptr, a5) )
          {
            *v16 = -1;
            ++v14;
          }
        }
        else
        {
          v15 = 0;
        }
      }
    }
LABEL_13:
    v11 += 12;
  }
  while ( v12 > v11 );
  free(ptr);
  v21 = v30[9];
  ptr = 0;
  v22 = v21 - 12 * v14;
  v30[9] = v22;
  if ( !v22 )
    v30[5] |= 0x208000u;
  if ( !v14 )
    return 0;
  v20 = *(_DWORD **)(a3 + 4);
  v23 = v29 / 0xC;
  if ( !v20 )
  {
    v20 = (_DWORD *)sub_2ACBF4(a1, 4 * v23);
    *(_DWORD *)(a3 + 4) = v20;
    if ( !v20 )
      goto LABEL_27;
  }
  if ( !v23 )
    goto LABEL_41;
  v24 = 0;
  v25 = &v20[v23];
  do
  {
    *v20++ = v24;
    v26 = v13[1];
    ++v13;
    if ( v26 == -1 )
      v24 += 12;
  }
  while ( v20 != v25 );
  if ( v24 )
    return 1;
LABEL_41:
  sub_2A6BBC("stabs.c", 645);
  return 1;
}
