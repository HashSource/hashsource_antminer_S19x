int __fastcall sub_1DC84(int a1)
{
  int i; // r5
  int v3; // r4

  for ( i = 0; ; i = 1 )
  {
    v3 = off_9104C[i]();
    if ( (*(int (**)(void))(v3 + 24))() == a1 )
      break;
    (*(void (__fastcall **)(int))(v3 + 296))(v3);
    if ( i == 1 )
      return 0;
  }
  return v3;
}
