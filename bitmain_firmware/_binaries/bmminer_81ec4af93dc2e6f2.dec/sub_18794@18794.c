int __fastcall sub_18794(int a1)
{
  int v1; // r4
  int result; // r0

  v1 = 0;
  result = sub_266F0(0);
  if ( result )
    goto LABEL_4;
  while ( ++v1 != 4 )
  {
    result = sub_266F0(v1);
    if ( result )
LABEL_4:
      result = sub_18728(v1, a1);
  }
  return result;
}
