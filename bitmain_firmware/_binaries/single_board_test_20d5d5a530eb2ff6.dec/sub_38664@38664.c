int __fastcall sub_38664(int a1)
{
  _UNKNOWN **v1; // r5
  int (*i)(void); // r3
  int v4; // r4
  int (*v5)(void); // t1

  v1 = &off_19A72C;
  for ( i = sub_39BC8; ; i = v5 )
  {
    v4 = i();
    if ( (*(int (**)(void))(v4 + 24))() == a1 )
      break;
    (*(void (__fastcall **)(int))(v4 + 296))(v4);
    if ( v1 == &off_19A730 )
      return 0;
    v5 = (int (*)(void))v1[1];
    ++v1;
  }
  return v4;
}
