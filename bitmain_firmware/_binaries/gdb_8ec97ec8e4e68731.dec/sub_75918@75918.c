int __fastcall sub_75918(int result)
{
  unsigned int *v1; // r6
  unsigned int v2; // r3
  int v3; // r5
  int v4; // r4
  int v5; // t1

  v1 = (unsigned int *)result;
  if ( !result )
    return result;
  v2 = *(_DWORD *)result;
  if ( !*(_DWORD *)result )
    return result;
  v3 = result + 4;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v3 += 4;
    result = v5;
    if ( !v5 )
      goto LABEL_5;
    result = sub_171258(result);
    if ( **(_BYTE **)(result + 24) == 10 )
      break;
    v2 = *v1;
LABEL_5:
    if ( ++v4 >= v2 )
      return result;
  }
  if ( v4 )
  {
    free(v1);
    sub_946E0("'void' invalid as parameter type");
  }
  if ( *v1 != 1 )
  {
    free(v1);
    sub_946E0("parameter types following 'void'");
  }
  return result;
}
