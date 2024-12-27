using System;
using System.Collections.Generic;

public class HelloWorld
{
  public static void Main(string[] args)
  {
    var items = new List<Item>();
    var item1 = new Item { Name = "Aquiles", Age = 13 };
    items.Add(item1);
    Console.WriteLine("Items:\n");
    foreach (var item in items)
    {
      Console.WriteLine($"  - Name: {item.Name}, Age: {item.Age}");
    }
  }
}

public class Item
{
  public string Name { get; set; }
  public int Age { get; set; }
}
