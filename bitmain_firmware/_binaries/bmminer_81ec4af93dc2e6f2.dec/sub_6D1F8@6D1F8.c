int __fastcall sub_6D1F8(int a1, const char *a2, int a3)
{
  int v7; // [sp+10h] [bp-Ch]
  FILE *stream; // [sp+14h] [bp-8h]

  stream = fopen(a2, "w");
  if ( !stream )
    return -1;
  v7 = sub_6D178(a1, (int)stream, a3);
  if ( fclose(stream) )
    return -1;
  else
    return v7;
}
