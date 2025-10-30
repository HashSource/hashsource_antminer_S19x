int __fastcall sub_60730(int a1, int a2, int a3)
{
  int v7; // [sp+10h] [bp-Ch]
  FILE *stream; // [sp+14h] [bp-8h]

  stream = (FILE *)fopen64(a2, "w");
  if ( !stream )
    return -1;
  v7 = sub_606B0(a1, (int)stream, a3);
  if ( fclose(stream) )
    return -1;
  else
    return v7;
}
