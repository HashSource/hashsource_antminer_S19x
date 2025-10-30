int __fastcall sub_13B50(int result)
{
  int v1; // r0
  int v2; // [sp+4h] [bp-18h]
  int v3; // [sp+8h] [bp-14h]
  int i; // [sp+Ch] [bp-10h]

  v2 = result;
  if ( result )
  {
    for ( i = 0; (&off_86444)[6 * i]; ++i )
    {
      v3 = sub_65ED4();
      v1 = sub_67728((&off_86444)[6 * i]);
      sub_6611C(v3, "type", v1);
      ((void (__fastcall *)(int, char **))(&off_86444)[6 * i + 1])(v3, &(&off_86444)[6 * i]);
      result = sub_66EA4(v2, v3);
    }
  }
  return result;
}
