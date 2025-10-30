int __fastcall sub_2AAF90(int result, int (__fastcall *a2)(_DWORD *, int), int a3)
{
  unsigned int v4; // r1
  int v5; // r7
  int v7; // r8
  _DWORD *v8; // r4

  v4 = *(_DWORD *)(result + 12);
  v5 = result;
  *(_BYTE *)(result + 24) |= 1u;
  if ( v4 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_DWORD **)(*(_DWORD *)v5 + 4 * v7);
      if ( v8 )
        break;
LABEL_9:
      if ( v4 <= ++v7 )
        goto LABEL_7;
    }
    while ( 1 )
    {
      result = a2(v8, a3);
      if ( !result )
        break;
      v8 = (_DWORD *)*v8;
      if ( !v8 )
      {
        v4 = *(_DWORD *)(v5 + 12);
        goto LABEL_9;
      }
    }
  }
LABEL_7:
  *(_BYTE *)(v5 + 24) &= ~1u;
  return result;
}
