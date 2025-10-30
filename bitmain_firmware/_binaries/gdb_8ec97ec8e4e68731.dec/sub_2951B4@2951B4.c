int sub_2951B4()
{
  int result; // r0
  int v1; // r1

  result = sub_29B4D0(dword_48AAD4);
  v1 = dword_4900DC;
  if ( dword_4900DC <= result && !dword_46DED4 && off_46DED0 == &unk_46E718 )
  {
    result = sub_29B610(dword_48AAD4, dword_4900DC, 1);
    v1 = dword_4900DC;
  }
  if ( v1 < 0 )
    dword_4900DC = 0;
  return result;
}
