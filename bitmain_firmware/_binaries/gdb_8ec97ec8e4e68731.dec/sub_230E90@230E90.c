void sub_230E90()
{
  int v0; // r3
  int v1; // r0

  v0 = dword_489F70;
  if ( dword_489F70 )
  {
    while ( !*(_DWORD *)(v0 + 196) )
    {
      if ( (unsigned int)(*(_DWORD *)(v0 + 312) - 3) > 2 )
        sub_946E0(
          "The \"%s\" target does not support \"run\".  Try \"help target\" or \"continue\".",
          *(const char **)(v0 + 4));
      v0 = *(_DWORD *)v0;
      if ( !v0 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v1 = sub_94700((int)"target.c", 2484, "No targets found");
    sub_230EFC(v1);
  }
}
