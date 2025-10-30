int __fastcall sub_80410(_DWORD *a1, const char *a2, const char *a3)
{
  char *v6; // [sp+14h] [bp-8h]

  v6 = sub_8026C(a2, a3);
  if ( v6 )
  {
    if ( sub_891C8(*a1, v6, v6) )
    {
      sub_89984(2, "src/mdc.c", 101, "zc_hashtable_put fail");
      sub_80224(v6);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_89984(2, "src/mdc.c", 96, "zlog_mdc_kv_new failed");
    return -1;
  }
}
