const char *__fastcall sub_E1334(int a1, int a2)
{
  const char *result; // r0

  if ( a1 != 1 )
    return "unknown";
  if ( a2 == 1 )
    return "instruction overflow";
  result = "unknown instruction";
  if ( a2 != 2 )
    return "unknown";
  return result;
}
