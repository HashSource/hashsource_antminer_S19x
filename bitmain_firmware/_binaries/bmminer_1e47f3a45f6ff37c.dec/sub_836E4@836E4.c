_DWORD *sub_836E4()
{
  int *v0; // r0
  _DWORD *v3; // [sp+Ch] [bp-8h]

  v3 = calloc(1u, 4u);
  if ( v3 )
  {
    *v3 = sub_8BEB0(20, 576520, 576632, 0, 538080);
    if ( *v3 )
    {
      return v3;
    }
    else
    {
      sub_8CD10(2, "src/mdc.c", 78, "zc_hashtable_new fail");
      sub_8354C(v3);
      return 0;
    }
  }
  else
  {
    v0 = _errno_location();
    sub_8CD10(2, "src/mdc.c", 69, "calloc fail, errno[%d]", *v0);
    return 0;
  }
}
