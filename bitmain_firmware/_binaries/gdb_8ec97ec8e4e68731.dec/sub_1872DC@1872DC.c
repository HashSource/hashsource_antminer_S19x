int sub_1872DC()
{
  const char *v0; // r4
  int result; // r0

  if ( !off_489B48(&dword_4899A0) )
  {
    off_46D594 = "forward";
    sub_946E0("Target does not support this operation.");
  }
  v0 = off_46D594;
  result = strcmp(off_46D594, "forward");
  if ( result )
  {
    result = strcmp(v0, "reverse");
    if ( !result )
      dword_48794C = 1;
  }
  else
  {
    dword_48794C = 0;
  }
  return result;
}
