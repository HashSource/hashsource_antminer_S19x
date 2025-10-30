int __fastcall sub_45D8C(int a1, int a2)
{
  int result; // r0
  unsigned int *v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r2

  result = *(_DWORD *)(a1 + 12);
  if ( !result )
    goto LABEL_6;
  if ( *(_DWORD *)(result + 4) == -1 )
    goto LABEL_6;
  v4 = (unsigned int *)(result + 4);
  __dmb(0xBu);
  do
  {
    v5 = __ldrex(v4);
    v6 = v5 - 1;
  }
  while ( __strex(v6, v4) );
  if ( v6 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 12) = a2;
  }
  else
  {
    result = sub_48A34(result);
    *(_DWORD *)(a1 + 12) = a2;
  }
  return result;
}
