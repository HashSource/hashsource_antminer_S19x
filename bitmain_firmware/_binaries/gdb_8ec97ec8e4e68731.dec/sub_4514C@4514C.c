FILE *__fastcall sub_4514C(int a1, sigset_t *set, sigset_t *a3, sigset_t *a4)
{
  FILE *v8; // r2
  FILE *result; // r0
  FILE *stream; // [sp+4h] [bp-2008h] BYREF
  char s[8]; // [sp+8h] [bp-2004h] BYREF
  char v12[4080]; // [sp+10h] [bp-1FFCh] BYREF
  char v13[4100]; // [sp+1008h] [bp-1004h] BYREF

  sigemptyset(set);
  sigemptyset(a3);
  sigemptyset(a4);
  sub_93170(v13, 4096, "/proc/%d/status", a1);
  sub_967F0((int)&stream, (int)v13, "r");
  v8 = stream;
  if ( !stream )
    sub_946E0("Could not open %s", v13);
  while ( fgets(s, 4096, v8) )
  {
    if ( !strncmp(s, "SigPnd:\t", 8u) || !strncmp(s, "ShdPnd:\t", 8u) )
    {
      sub_40E90(v12, set);
    }
    else if ( !strncmp(s, "SigBlk:\t", 8u) )
    {
      sub_40E90(v12, a3);
    }
    else if ( !strncmp(s, "SigIgn:\t", 8u) )
    {
      sub_40E90(v12, a4);
    }
    v8 = stream;
  }
  result = stream;
  if ( stream )
    return (FILE *)fclose(stream);
  return result;
}
