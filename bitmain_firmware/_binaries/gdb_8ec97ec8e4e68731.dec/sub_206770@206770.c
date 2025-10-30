int __fastcall sub_206770(int *a1, int a2)
{
  int *v3; // r5
  int result; // r0

  if ( *a1 == -1 )
    JUMPOUT(0x16FD44);
  v3 = sub_2062E0(a1, a2);
  result = *v3;
  if ( !*v3 )
  {
    result = ((int (__fastcall *)(int))loc_16FD44)(a2);
    *v3 = result;
  }
  return result;
}
