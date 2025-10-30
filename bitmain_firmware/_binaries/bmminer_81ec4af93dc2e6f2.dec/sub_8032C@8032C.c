_DWORD *sub_8032C()
{
  int *v0; // r0
  _DWORD *v3; // [sp+Ch] [bp-8h]

  v3 = calloc(1u, 4u);
  if ( v3 )
  {
    *v3 = sub_88B20(20, 563324, 563436, 0, 524836);
    if ( *v3 )
    {
      return v3;
    }
    else
    {
      sub_89984(2, "src/mdc.c", 78, "zc_hashtable_new fail");
      sub_80190(v3);
      return 0;
    }
  }
  else
  {
    v0 = _errno_location();
    sub_89984(2, "src/mdc.c", 69, "calloc fail, errno[%d]", *v0);
    return 0;
  }
}
