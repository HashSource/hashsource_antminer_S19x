int sub_1D8898()
{
  _DWORD *v0; // r3
  char *v1; // r0
  char *v2; // r0
  char *v3; // r0

  if ( off_46DAB8[1] || dword_48794C == 1 )
    sub_259F10("Replay mode:\n");
  else
    sub_259F10("Record mode:\n");
  v0 = (_DWORD *)dword_4880BC;
  if ( dword_4880BC )
  {
    while ( v0[2] )
    {
      v0 = (_DWORD *)v0[1];
      if ( !v0 )
        goto LABEL_10;
    }
    v1 = sub_98880(v0[6], v0[7]);
    sub_259F10("Lowest recorded instruction number is %s.\n", v1);
    if ( off_46DAB8[1] || dword_48794C == 1 )
    {
      v2 = sub_98880(off_46DAB8[6], off_46DAB8[7]);
      sub_259F10("Current instruction number is %s.\n", v2);
    }
    v3 = sub_98880(dword_4880D8, dword_4880DC);
    sub_259F10("Highest recorded instruction number is %s.\n", v3);
    sub_259F10("Log contains %u instructions.\n", dword_4880E0);
  }
  else
  {
LABEL_10:
    sub_259F10("No instructions have been logged.\n");
  }
  return sub_259F10("Max logged instructions is %u.\n", dword_46DABC);
}
