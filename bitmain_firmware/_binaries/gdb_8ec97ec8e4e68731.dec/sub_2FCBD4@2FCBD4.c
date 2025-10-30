int __fastcall sub_2FCBD4(int result, int (__fastcall *a2)(int *, int), int a3)
{
  unsigned int v4; // r1
  int v5; // r7
  int v7; // r8
  int *v8; // r4
  int *v9; // r0

  v4 = *(_DWORD *)(result + 12);
  v5 = result;
  *(_BYTE *)(result + 24) |= 1u;
  if ( v4 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(int **)(*(_DWORD *)v5 + 4 * v7);
      if ( v8 )
        break;
LABEL_11:
      if ( v4 <= ++v7 )
        goto LABEL_9;
    }
    while ( 1 )
    {
      v9 = v8;
      if ( *((_BYTE *)v8 + 12) == 7 )
        v9 = (int *)v8[5];
      result = a2(v9, a3);
      if ( !result )
        break;
      v8 = (int *)*v8;
      if ( !v8 )
      {
        v4 = *(_DWORD *)(v5 + 12);
        goto LABEL_11;
      }
    }
  }
LABEL_9:
  *(_BYTE *)(v5 + 24) &= ~1u;
  return result;
}
