int __fastcall sub_2CF08(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r5
  int v8; // r4
  int v9; // r3
  int v10; // r1
  int v11; // r4

  result = *(unsigned __int16 *)(a2 + 32);
  if ( !*(_WORD *)(a2 + 32) )
  {
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = result;
    *(_WORD *)(a1 + 16) = *(_WORD *)(a2 + 34);
    goto LABEL_10;
  }
  v7 = a2 + 80;
  v8 = 0;
  do
  {
    result = sub_6DAF4(a3, v7);
    v9 = *(unsigned __int16 *)(a2 + 32);
    if ( result >= 0 )
    {
      v10 = v8 - 1;
      if ( v9 <= v8 )
        goto LABEL_9;
      v11 = a2 + 16 * v8;
      result = *(unsigned __int16 *)(v11 + 92);
      *(_QWORD *)a1 = *(_QWORD *)(v11 + 80);
      *(_WORD *)(a1 + 16) = result;
      if ( v10 == -1 )
        goto LABEL_10;
      goto LABEL_7;
    }
    ++v8;
    v7 += 16;
  }
  while ( v9 != v8 );
  v10 = v8 - 1;
LABEL_9:
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)(a1 + 16) = *(_WORD *)(a2 + 34);
  if ( v10 != -1 )
  {
LABEL_7:
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 16 * v10 + 80);
    return result;
  }
LABEL_10:
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = -1;
  return result;
}
