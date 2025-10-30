int __fastcall sub_2E906C(int a1, _DWORD *a2)
{
  int v2; // r12
  int result; // r0
  char *v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r7
  char *v10; // r6
  int v11; // r2
  char *v12; // r7
  void *v13; // r0
  int v14; // r3
  int v15; // r10
  int v16; // r8
  void (__fastcall *v17)(int, char *, _DWORD *); // r9
  char *v18; // r1
  char *v19; // r11
  _DWORD *v20; // r0
  void *ptr; // [sp+4h] [bp-10h] BYREF
  _DWORD v22[3]; // [sp+8h] [bp-Ch] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  *a2 = 0;
  ptr = 0;
  if ( *(_DWORD *)(v2 + 4) != 5 )
    return 1;
  if ( (*(_BYTE *)(a1 + 40) & 7) != 1 )
    return 1;
  v6 = sub_2AD7AC(a1, ".dynamic");
  v7 = (int)v6;
  if ( !v6 || !*((_DWORD *)v6 + 9) )
    return 1;
  if ( sub_2ADFDC(a1, (int)v6, (int *)&ptr) )
  {
    v8 = sub_2D4B7C(a1, v7);
    if ( v8 != -257 )
    {
      v9 = *(_DWORD *)(v7 + 36);
      v10 = (char *)ptr;
      v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 64) + 4 * v8);
      v12 = (char *)ptr + v9;
      v13 = ptr;
      v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 392);
      v15 = *(_DWORD *)(v11 + 28);
      v16 = *(unsigned __int8 *)(v14 + 6);
      v17 = *(void (__fastcall **)(int, char *, _DWORD *))(v14 + 48);
      if ( ptr < v12 )
      {
        do
        {
          v18 = v10;
          v10 += v16;
          v17(a1, v18, v22);
          if ( !v22[0] )
            break;
          if ( v22[0] == 1 )
          {
            v19 = sub_2CD844(a1, v15, v22[1]);
            if ( !v19 )
              goto LABEL_8;
            v20 = (_DWORD *)sub_2ACBF4(a1, 12);
            if ( !v20 )
              goto LABEL_8;
            *v20 = *a2;
            v20[1] = a1;
            v20[2] = v19;
            *a2 = v20;
          }
        }
        while ( v12 > v10 );
        v13 = ptr;
      }
      free(v13);
      return 1;
    }
  }
LABEL_8:
  result = (int)ptr;
  if ( ptr )
  {
    free(ptr);
    return 0;
  }
  return result;
}
