char *sub_98850()
{
  int v0; // r0
  int v1; // r2

  v0 = dword_475844 + 1;
  if ( dword_475844 + 1 > 15 )
    v1 = 0;
  else
    v1 = 50;
  if ( dword_475844 + 1 > 15 )
  {
    dword_475844 = v1;
    return (char *)&unk_475524;
  }
  else
  {
    ++dword_475844;
    return (char *)&unk_475524 + v1 * v0;
  }
}
