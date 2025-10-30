int __fastcall sub_12774(int a1, int a2)
{
  int result; // r0
  unsigned int *v5; // r2
  unsigned int v6; // r1
  unsigned int v7; // r1

  result = *(_DWORD *)(a1 + 12);
  if ( !result )
    goto LABEL_6;
  if ( *(_DWORD *)(result + 4) == -1 )
    goto LABEL_6;
  v5 = (unsigned int *)(result + 4);
  __dmb(0xFu);
  do
  {
    v6 = __ldrex(v5);
    v7 = v6 - 1;
  }
  while ( __strex(v7, v5) );
  if ( v7 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 12) = a2;
  }
  else
  {
    result = sub_1427C();
    *(_DWORD *)(a1 + 12) = a2;
  }
  return result;
}
