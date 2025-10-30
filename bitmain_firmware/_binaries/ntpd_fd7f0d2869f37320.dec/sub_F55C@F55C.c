void __fastcall sub_F55C(_DWORD *a1)
{
  void *v2; // r0

  if ( a1 )
  {
    v2 = (void *)a1[1];
    if ( !v2 )
      sub_6FC54("ntp_config.c", 1284, 0, "((void *)0) != my_node->address");
    free(v2);
    free(a1);
  }
}
