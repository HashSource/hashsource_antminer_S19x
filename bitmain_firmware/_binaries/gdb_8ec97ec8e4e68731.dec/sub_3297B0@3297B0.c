int __fastcall sub_3297B0(int a1, unsigned int a2)
{
  *(_DWORD *)a1 = 1;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)(a1 + 10) = 0;
  if ( a2 )
    sub_3290C0((int *)a1, a2);
  return a1;
}
