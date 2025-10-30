int sub_2A8DC4()
{
  int v0; // r4

  if ( !dword_48BBE4 )
    return 1;
  v0 = *(_DWORD *)(dword_48BBE4 + 16);
  if ( (*(_BYTE *)(v0 + 43) & 2) != 0 )
  {
LABEL_7:
    *(_QWORD *)(v0 + 24) = j_ftello64(*(_DWORD *)(v0 + 8));
    return sub_2A8D4C(v0);
  }
  else
  {
    while ( dword_48BBE4 != v0 )
    {
      v0 = *(_DWORD *)(v0 + 16);
      if ( (*(_BYTE *)(v0 + 43) & 2) != 0 )
        goto LABEL_7;
    }
    return 1;
  }
}
