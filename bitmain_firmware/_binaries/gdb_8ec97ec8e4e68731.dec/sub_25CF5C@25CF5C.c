int __fastcall sub_25CF5C(int a1, int a2, int a3)
{
  bool v5; // zf

  sub_26BC70(a2);
  sub_26BC70(a3);
  v5 = a1 == 33;
  if ( a1 != 33 )
    v5 = a1 == 21;
  if ( !v5 )
    JUMPOUT(0x25CA10);
  return 0;
}
