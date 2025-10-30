void __fastcall sub_D9E7C(const char *a1, int a2, int a3)
{
  const char *v3; // r3
  const char *v5; // r0
  const char *v6; // [sp+4h] [bp-4h] BYREF

  v3 = a1;
  if ( !a1 )
    a3 = 0;
  v6 = a1;
  if ( a1 )
  {
    if ( sub_5B24C(&v6, "-location", 9u) || (a3 = sub_5B24C(&v6, "-l", 2u)) != 0 )
    {
      v5 = (const char *)sub_9360C(v6);
      a3 = 1;
      v3 = v5;
      v6 = v5;
    }
    else
    {
      v3 = v6;
    }
  }
  sub_D9338(v3, a2, a3, 0);
}
