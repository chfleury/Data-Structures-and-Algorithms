class HashMap<K extends string | number, V> {
  private readonly ARRAY_SIZE = 101;

  private array: Array<LinkedListNode<K, V>>;

  public constructor() {
    this.array = Array(this.ARRAY_SIZE).fill(undefined);
  }

  public set(key: K, value: V) {
    const hashKey = this.getHash(key);

    const arrayIndex = hashKey % this.ARRAY_SIZE;

    let currentNode = this.array[arrayIndex];

    if (!currentNode) {
      this.array[arrayIndex] = new LinkedListNode<K, V>(key, value);
    } else {
      while (true) {
        if (currentNode.key === key) {
          currentNode.value = value;

          return;
        }

        if (currentNode.next) {
          currentNode = currentNode.next;
        } else {
          currentNode.next = new LinkedListNode<K, V>(key, value);
          return;
        }
      }
    }
  }

  public get(key: K): V | undefined {
    const hashKey = this.getHash(key);

    const arrayIndex = hashKey % this.ARRAY_SIZE;

    let currentNode = this.array[arrayIndex];

    if (currentNode) {
      while (true) {
        if (currentNode.key === key) {
          return currentNode.value;
        }

        if (currentNode.next) {
          currentNode = currentNode.next;
        } else {
          return undefined;
        }
      }
    }

    return undefined;
  }

  // simple hash function for simplicity
  private getHash(key: K): number {
    if (typeof key === "string") {
      return Array.from("").reduce(
        (accumulator, currentValue) => accumulator + currentValue.charCodeAt(0),
        0
      );
    }

    if (typeof key === "number") {
      return key;
    }

    throw new Error("Unsuported type");
  }
}

class LinkedListNode<K, V> {
  public next: LinkedListNode<K, V> | undefined;
  public value: V | undefined;
  public key: K | undefined;

  constructor(key: K, value: V) {
    this.value = value;
    this.key = key;
  }
}

const MyHashMap = new HashMap<string, string>();

MyHashMap.set("first_property", "Hello World");
MyHashMap.set("first_property", "Hello World!!!");

MyHashMap.set("second_property", "2 place");

MyHashMap.set("third", "hi");
MyHashMap.set("fourth", "I'm");

MyHashMap.set("last", "Chris");

console.log(MyHashMap.get("first_property"));
console.log(MyHashMap.get("second_property"));

console.log(MyHashMap.get("third"));
console.log(MyHashMap.get("fourth"));

console.log(MyHashMap.get("last"));

console.log(MyHashMap.get("THIS PROPERTY IS NOT DEFINED!"));
